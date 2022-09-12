project(serialization_fuzz)


FILE(GLOB_RECURSE BOOST_SERIALIZATION_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} libs/boost_serialization/src/*.cpp)

#add_compile_options(-fsanitize=fuzzer)
#add_link_options(-fsanitize=fuzzer)

add_executable(${PROJECT_NAME} "src/main.cpp" ${BOOST_SERIALIZATION_SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC libs/boost_serialization/include)
target_include_directories(${PROJECT_NAME} PUBLIC libs/cereal/include)
target_include_directories(${PROJECT_NAME} PUBLIC libs/yas/include)
#target_compile_definitions(${PROJECT_NAME} PUBLIC FUZZER)
