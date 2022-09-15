# Serializers fuzz tests

Repository implementing fuzz tests for three popular c++ serialization libraries:
- [boost serialization](https://github.com/boostorg/serialization)
- [cereal](https://github.com/USCiLab/cereal)
- [YAS](https://github.com/niXman/yas)

## Requirements

```bash
apt-get install -y cmake clang afl++ afl++-clang
```

## Compilation

```bash
cmake -DSERIALIZER=yas -B build -DCMAKE_CXX_COMPILER=afl-clang-fast++ -DCMAKE_C_COMPILER=afl-clang-fast
cmake --build build --parallel
```

You can change `-DSERIALIZER=yas` to one of available serializers:
- yas
- cereal
- boost_serialization

## Usage

1. create `in` directory with `mkdin in`
2. generate test inputs with `./build/serialization_fuzz_generator`
3. run fuzzer with `afl-fuzz -i in -o out ./build/serialization_fuzz`
