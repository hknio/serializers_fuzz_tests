#!/usr/bin/env python3

"""Script to automaticlly generate C++ header file with types for serialization fuzz testing"""

import re
import random

BASE_TYPES = {
    "bool": ["true", "false"],
    "int8_t": [-128, -1, 0, 127],
    "uint8_t": [0, 255],
    "int16_t": [-32768, 0, 32767],
    "uint16_t": [0, 65535],
    "int32_t": [-2147483648, 0, 2147483647],
    "uint32_t": [0, 4294967295],
    "int64_t": ["std::numeric_limits<int64_t>::min()", 0, "std::numeric_limits<int64_t>::max()"],
    "uint64_t": [1, "std::numeric_limits<uint64_t>::max()"],
    "float": ["-5.2e26", "std::numeric_limits<float>::min()", "std::numeric_limits<float>::max()", "std::numeric_limits<float>::quiet_NaN()", "std::numeric_limits<float>::infinity()"],
    "double": ["3.7e245", "std::numeric_limits<double>::min()", "std::numeric_limits<double>::max()", "std::numeric_limits<double>::quiet_NaN()", "std::numeric_limits<double>::infinity()"],
    "std::string": ["\"\"", "\"!@#$%^&*( !@$$%&*(\"", "\"\\1\\2\\3\\4\\5\\0\\1\\2\\3\\4\""]
}

BASE_TYPES_FOR_TEMPLATES = {
    "bool",
    "int8_t",
    "int32_t",
    "uint64_t",
    "float",
    "std::string"
}

TEMPLATED_STD_TYPES = [
    "std::array<T, S>",
    "std::bitset<S>",
    "std::deque<V>",
    "std::forward_list<V>",
    "std::list<V>",
    "std::map<K, V>",
    "std::multimap<K, V>",
    "std::multiset<T>",
    "std::pair<V, V>",
    "std::set<T>",
    "std::unordered_map<K, V>",
    "std::unordered_multimap<K, V>",
    "std::unordered_multiset<T>",
    "std::unordered_set<T>",
    "std::vector<T>"
]

NASTED_TEMPLATED_STD_TYPES = [
    "std::vector<std::vector<T>>",
    "std::map<K, std::map<K, V>>",
    "std::deque<std::set<T>>",
    "std::unordered_map<K, std::unordered_multimap<K, V>>",
    "std::vector<std::unordered_set<T>>",
    "std::list<std::vector<T>>",
    "std::list<std::forward_list<std::set<T>>>",
    "std::forward_list<std::map<K, std::list<T>>>",
    "std::vector<std::array<T, S>>",
    "std::set<std::pair<V, V>>"
]

TEMPLATE_SIZES = [
    1,
    32,
    1023
]

FILE_HEADER = """#pragma once

// This file was generated automatically by generate_types.py python script

#include <cstdint>
#include <array>
#include <bitset>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <optional>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <limits>
#include <queue>
#include <string>"""

def generate(expression, values, closures, pattern):
    if len(pattern) == 0:
        values = [re.sub(r',}', '}', value.rstrip(',')) for value in values]
        return [(expression, values)]
    expressions = []
    if pattern[0] in ('K', 'V', 'T', 'S'):
        if pattern[0] == 'K':
            for base_type in BASE_TYPES_FOR_TEMPLATES:
                new_values = []
                example_value = random.choice(BASE_TYPES[base_type])
                new_values.extend([value + f"{{{example_value}" for value in values])
                expressions.extend(generate(expression + base_type, new_values, closures + [0], pattern[1:]))
        elif pattern[0] in ('V', 'T'):            
            for base_type in BASE_TYPES_FOR_TEMPLATES:
                new_values = []
                example_value = random.choice(BASE_TYPES[base_type])
                new_values.extend([value + f"{example_value}" for value in values])
                expressions.extend(generate(expression + base_type, new_values, closures, pattern[1:]))
        elif pattern[0] == 'S':
            for size in TEMPLATE_SIZES:
                expressions.extend(generate(expression + str(size), values, closures, pattern[1:]))
    elif pattern[0] in BASE_TYPES:
        new_values = []
        example_value = random.choice(BASE_TYPES[pattern[0]])
        new_values.extend([value + f"{example_value}" for value in values])
        expressions.extend(generate(expression + pattern[0], new_values, closures, pattern[1:]))
    else:
        if pattern[0] == '<':
            values = [value + "{" for value in values]
            closures = [closure + 1 for closure in closures]
        elif pattern[0] == '>':
            closures = closures[:]
            closures_count = 1
            while len(closures) > 0 and closures[-1] == 0:
                closures_count += 1
                closures.pop()
            closures = [closure - 1 for closure in closures]
            values = [value + "}" * closures_count for value in values]
        elif pattern[0] == ',':
            values = [value + "," for value in values]
        expressions.extend(generate(expression + pattern[0], values, closures, pattern[1:]))
    
    return expressions

def generate_types_with_inputs():
    results = {}
    for template in list(BASE_TYPES.keys()) + TEMPLATED_STD_TYPES + NASTED_TEMPLATED_STD_TYPES:
        results[template] = generate("", [""], [], re.split(r'(<|>| |,)', template))
    return results

def generate_serialization(templates):
    content = "template<class Serializer>\n" + \
        "struct DataTypes {\n" + \
        "  Serializer& ar;\n\n" + \
        "  DataTypes(Serializer& ar) : ar(ar) {}\n\n" + \
        "  void serialize(uint16_t type) {\n" + \
        "    switch(type) {\n"

    functions = []
    for template, values in templates.items():
        for type in values:
            function_name = "serialize_" + re.sub(r'[^a-zA-Z0-9_]', '_', type[0])
            content += f"    case {len(functions)}: return {function_name}();\n"
            functions.append(
                f"  void {function_name}() {{\n" +
                f"    {type[0]} v;\n" +
                f"    ar & v;\n" +
                f"  }}"
            )
    content += "    }\n" + \
        "  }\n\n" + \
        "\n".join(functions) + "\n\n" \
        "};\n"
    return content

def generate_inputs(templates):
    content = "template<class Serializer>\n" + \
        "struct InputsGenerator {\n" + \
        "  Serializer& ar;\n\n" + \
        "  InputsGenerator(Serializer& ar) : ar(ar) {}\n\n" + \
        "  uint16_t generate(size_t id) {\n" + \
        "    switch(id) {\n"
    
    type_id = 0
    inputs = []
    for template, values in templates.items():
        for type in values:
            for input in type[1]:
                content += f"      case {len(inputs)}: return input_{len(inputs)}();\n"                  
                inputs.append(
                    f"  uint16_t input_{len(inputs)}() {{\n" +
                    f"    {type[0]} v = {input};\n" +
                    f"    ar & v;\n" +
                    f"    return {type_id};\n" +
                    f"  }}"
                )
            type_id += 1

    content += "    }\n\n" + \
        "    return 0;\n" + \
        "  }\n\n" + \
        "\n".join(inputs) + "\n\n" \
        "};\n\n" + \
        f"size_t get_inputs_count() {{ return {len(inputs)}; }}\n"
    return content

random.seed(0)
templates = generate_types_with_inputs()
with open('types.hpp', 'w') as f:
    f.write(FILE_HEADER + "\n\n" + generate_serialization(templates))
with open('inputs.hpp', 'w') as f:
    f.write(FILE_HEADER + "\n\n" + generate_inputs(templates))

