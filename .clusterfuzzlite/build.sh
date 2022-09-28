#!/bin/bash -eu


cmake -DSERIALIZER=yas -B build -DCMAKE_CXX_COMPILER=$CXX -DCMAKE_C_COMPILER=$CC
cmake --build build --parallel

cp build/serialization_fuzz $OUT/
