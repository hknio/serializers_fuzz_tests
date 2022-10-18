#include <fstream>
#include <sstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <stdio.h>
#include <unistd.h>

#ifndef SERIALIZER
#error "SERIALIZER is not defined"
#endif

#include "types.hpp"

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

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    try {
        entrypoint(std::vector<uint8_t>(data, data + size));
    } catch(std::exception) {}
    return 0;
}
