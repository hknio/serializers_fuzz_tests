#!/bin/bash -eu


cmake -DSERIALIZER=yas -B build -DCMAKE_CXX_COMPILER=$CXX -DCMAKE_C_COMPILER=$CC
cmake --build build --parallel

cd build
mkdir in
./serialization_fuzz_generator
zip -j serialization_fuzz_seed_corpus.zip in/*

cp serialization_fuzz serialization_fuzz_seed_corpus.zip $OUT/
