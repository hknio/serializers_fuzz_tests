# Serializers fuzz tests

Repository implementing fuzz tests for popular c++ serialization libraries:
- [boost serialization](https://github.com/boostorg/serialization)
- [cereal](https://github.com/USCiLab/cereal)
- [YAS](https://github.com/niXman/yas)
- [msgpack](https://github.com/msgpack/msgpack-c/tree/cpp_master)

### Requirements

```bash
apt-get install -y cmake clang libboost-all-dev
```

## Fuzzing

Project was designed to work with the following fuzzing engines:
- [libFuzzer](https://llvm.org/docs/LibFuzzer.html)
- [AFL++](https://github.com/AFLplusplus/AFLplusplus)
- [honggfuzz](https://github.com/google/honggfuzz)

For each fuzzing engine there are four available fuzzers:
- boost_serialization_fuzzer
- cereal_fuzzer
- yas_fuzzer
- msgpack_fuzzer

### libFuzzer

Build with: 
```bash
cmake -B build -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang
cmake --build build --parallel
```

Run with:
```bash
build/cereal_fuzzer
```

### AFL++

Build with:
```bash
cmake -B build -DCMAKE_CXX_COMPILER=afl-clang-fast++ -DCMAKE_C_COMPILER=afl-clang-fast
cmake --build build --parallel
```

Run with:
```bash
mkdir in
echo > in/empty_input
afl-fuzz -i in -o out ./build/yas_fuzzer
```

### honggfuzz

Build with:
```bash
cmake -B build -DCMAKE_CXX_COMPILER=hfuzz-clang++ -DCMAKE_C_COMPILER=hfuzz-clang
cmake --build build --parallel
```

Run with:
```bash
mkdir in
echo > in/empty_input
honggfuzz -i in -o out -- build/msgpack_fuzzer
```

### Generating inputs

Instead of creating empty initial input you can use a generator to create them automatically.

Build generator with: 
```bash
cmake -B generator -DBUILD_CORPUS_GENERATOR=YES
cmake --build generator --parallel
```

And then generate inputs with:
```bash
mkdir in
generator/yas_fuzzer_corpus_generator in
```
