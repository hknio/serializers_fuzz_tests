cmake_minimum_required(VERSION 3.14)

project(serializers_fuzz_tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SERIALIZERS "boost_serialization;yas;cereal;msgpack" CACHE STRING "Serializers to compile")
set(LIB_FUZZING_ENGINE "-fsanitize=fuzzer")

option(BUILD_CORPUS_GENERATOR "Build corpus generator instead of fuzzer" OFF)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build." FORCE)
endif()

find_package(Threads REQUIRED)

if(NOT BUILD_CORPUS_GENERATOR AND NOT CMAKE_CXX_FLAGS AND NOT CMAKE_C_FLAGS)
    set(CMAKE_CXX_FLAGS "-fsanitize=fuzzer -fsanitize=address")
    set(CMAKE_C_FLAGS "-fsanitize=fuzzer -fsanitize=address")
endif()

foreach(SERIALIZER ${SERIALIZERS})
    if(BUILD_CORPUS_GENERATOR)
        set(TARGET_NAME ${SERIALIZER}_fuzzer_corpus_generator)
        add_executable(${TARGET_NAME} "src/generator.cpp")
    else()
        set(TARGET_NAME ${SERIALIZER}_fuzzer)
        add_executable(${TARGET_NAME} "src/main.cpp")
    endif()

    target_include_directories(${TARGET_NAME} PUBLIC libs/${SERIALIZER}/include)
    target_compile_definitions(${TARGET_NAME} PUBLIC "SERIALIZER=${SERIALIZER}")
    target_link_libraries(${TARGET_NAME} PUBLIC Threads::Threads)

    include_directories(libs/${SERIALIZER}/include)

    if(SERIALIZER STREQUAL "boost_serialization")
        FILE(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} libs/${SERIALIZER}/src/*.cpp)
        target_sources(${TARGET_NAME} PUBLIC ${SOURCES})
    endif()

    if(LIB_FUZZING_ENGINE AND NOT BUILD_CORPUS_GENERATOR)
        target_link_options(${TARGET_NAME} PUBLIC ${LIB_FUZZING_ENGINE})
    endif()
endforeach()
