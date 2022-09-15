#include <fstream>
#include <sstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <stdio.h>
#include <unistd.h>

//#if defined(__AFL_COMPILER) && defined(INPUTS_GENERATOR)
//__AFL_COVERAGE();
//__AFL_COVERAGE_START_OFF();
//#endif

#ifndef SERIALIZER
#error "SERIALIZER is not defined"
#endif

#include "types.hpp"
#ifdef INPUTS_GENERATOR
#include "inputs.hpp"
#endif

// hack to include file from definition
#define QUOTEME(x) QUOTEME_1(x)
#define QUOTEME_1(x) #x
#define INCLUDE_FILE(x) QUOTEME(x.hpp)
#include INCLUDE_FILE(SERIALIZER)

void entrypoint(const std::vector<uint8_t>& data) {
    if(data.size() < 3) {
        return;
    }

    uint16_t type = *(uint16_t*)&data[0];

    std::stringstream ss;
    std::copy(data.begin() + 2, data.end(), std::ostream_iterator<uint8_t>(ss));
    
    serializer::Writer archive(ss);
    DataTypes(archive).serialize(type);
}

#if defined(INPUTS_GENERATOR)
int main() {
    size_t inputs_count = get_inputs_count();
    for(size_t i = 0; i < inputs_count; ++i) {
        std::stringstream ss;
        serializer::Reader archive(ss);
        uint16_t test_id = InputsGenerator(archive).generate(i);
        
        std::ofstream file;
        file.open(std::string("in/") + std::to_string(i) + std::string(".in"), std::ios::binary);
        file.write(reinterpret_cast<char*>(&test_id), sizeof(test_id));
        file << ss.rdbuf();
    }
    return 0;
}
#elif defined(LIBFUZZER)
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    try {
        entrypoint(std::vector<uint8_t>(data, data + size));
    } catch(std::exception) {}
    return 0;
}
#elif defined(__AFL_COMPILER)
__AFL_FUZZ_INIT();
int main() {    

#ifdef __AFL_HAVE_MANUAL_CONTROL
    __AFL_INIT();
#endif
    unsigned char *buf = __AFL_FUZZ_TESTCASE_BUF; 
    while (__AFL_LOOP(100000)) {
        int len = __AFL_FUZZ_TESTCASE_LEN;
        if (len < 3) continue;
        try {
            entrypoint(std::vector<uint8_t>(buf, buf + len));
        } catch(std::exception) {}
    }
    return 0;
}
#endif