#include <fstream>
#include <sstream>
#include <iostream>
#include <iterator>
#include <stdio.h>
#include <unistd.h>

#ifndef SERIALIZER
#error "SERIALIZER is not defined"
#endif

#include "inputs.hpp"

// hack to include file from definition
#define QUOTEME(x) QUOTEME_1(x)
#define QUOTEME_1(x) #x
#define INCLUDE_FILE(x) QUOTEME(x.hpp)
#include INCLUDE_FILE(SERIALIZER)

int main(int argc, char **argv) {
    if(argc != 2) {
        std::cout << "Usage: " << argv[0] << " <directory>" << std::endl;
        return 1;
    }

    std::string directory = argv[1];
    std::cout << "Using directory: " << directory << std::endl;

    size_t inputs_count = get_inputs_count();
    for(size_t i = 0; i < inputs_count; ++i) {
        std::stringstream ss;
        serializer::Reader archive(ss);
        uint16_t test_id = InputsGenerator(archive).generate(i);
        
        std::ofstream file;
        file.open(directory + std::string("/") + std::to_string(i) + std::string(".in"), std::ios::binary);
        file.write(reinterpret_cast<char*>(&test_id), sizeof(test_id));
        file << ss.rdbuf();
    }
    return 0;
}
