cmake_minimum_required(VERSION 3.14)

project(serialization_fuzz)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SERIALIZER "boost_serialization" CACHE STRING "Serializer to use")
set(SOURCES "")

option(LIBFUZZER "Link libfuzzer" OFF)
option(SANITIZE "Use address sanitizer" ON)
option(WITH_GENERATOR "Create input generator" ON)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(LIBFUZZER ON)
endif()

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build." FORCE)
endif()

message("-- Using serializer: ${SERIALIZER}")

add_executable(${PROJECT_NAME} "src/main.cpp")

target_compile_options(${PROJECT_NAME} PUBLIC -fno-inline-functions -fno-inline -g)

if(SANITIZE)
    target_compile_options(${PROJECT_NAME} PUBLIC -fsanitize=address)
    target_link_options(${PROJECT_NAME} PUBLIC -fsanitize=address)
endif()

if(LIBFUZZER AND NOT CMAKE_CXX_COMPILER MATCHES "afl")
    target_compile_options(${PROJECT_NAME} PUBLIC -fsanitize=fuzzer)
    target_link_options(${PROJECT_NAME} PUBLIC -fsanitize=fuzzer)
    target_compile_definitions(${PROJECT_NAME} PUBLIC LIBFUZZER)
endif()

if(SERIALIZER STREQUAL "boost_serialization")
    include_directories(libs/boost_serialization/include)
    FILE(GLOB_RECURSE BOOST_SERIALIZATION_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} libs/boost_serialization/src/*.cpp)
    set(SOURCES ${SOURCES} ${BOOST_SERIALIZATION_SOURCES})
elseif(SERIALIZER STREQUAL "yas")
    include_directories(libs/yas/include)
elseif(SERIALIZER STREQUAL "cereal")
    include_directories(libs/cereal/include)
elseif(SERIALIZER STREQUAL "msgpack")
    include_directories(libs/msgpack/include)
else()
    message(FATAL_ERROR "Invalid serializer (${SERIALIZER})")
endif()

target_compile_definitions(${PROJECT_NAME} PUBLIC "SERIALIZER=${SERIALIZER}")
target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})

if(WITH_GENERATOR)
    add_executable(${PROJECT_NAME}_generator "src/main.cpp")
    target_compile_definitions(${PROJECT_NAME}_generator PUBLIC "SERIALIZER=${SERIALIZER}" INPUTS_GENERATOR)
    target_sources(${PROJECT_NAME}_generator PUBLIC ${SOURCES})
endif()
