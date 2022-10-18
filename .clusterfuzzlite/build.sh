#!/bin/bash -eu

if [ "$FUZZING_ENGINE" = honggfuzz ]; then
    export CC="$SRC"/"$FUZZING_ENGINE"/hfuzz_cc/hfuzz-clang
    export CXX="$SRC"/"$FUZZING_ENGINE"/hfuzz_cc/hfuzz-clang++
fi

# Build fuzzers

cd $SRC/serializers_fuzz_tests

cmake \
    -B "$WORK/fuzzer_build" \
    -DCMAKE_C_COMPILER="$CC" \
    -DCMAKE_C_FLAGS="$CFLAGS" \
    -DCMAKE_CXX_COMPILER="$CXX" \
    -DCMAKE_CXX_FLAGS="$CXXFLAGS" \
    -DCMAKE_BUILD_TYPE=RelWithDebInfo \
    -DLIB_FUZZING_ENGINE:STRING="$LIB_FUZZING_ENGINE"

cmake --build "$WORK/fuzzer_build" --parallel

find "$WORK/fuzzer_build" -name '*_fuzzer' -exec cp -v '{}' $OUT/ \;
find "$SRC/serializers_fuzz_tests" -name '*_seed_corpus.zip' -exec cp -v '{}' $OUT/ \;
