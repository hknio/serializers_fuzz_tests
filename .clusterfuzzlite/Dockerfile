FROM gcr.io/oss-fuzz-base/base-builder:v1
RUN apt-get update && apt-get install -y make autoconf automake libtool wget python

# install boost 1.80.0 headers
RUN wget https://boostorg.jfrog.io/artifactory/main/release/1.80.0/source/boost_1_80_0.tar.bz2 && \
    tar jxf boost_1_80_0.tar.bz2 && \
    cd boost_1_80_0 && \
    ./bootstrap.sh --with-toolset=clang && \
    ./b2 clean && \
    ./b2 headers && \
    cp -R boost/ /usr/include/ && \
    cd .. && \
    rm -rf boost_1_80_0 boost_1_80_0.tar.bz2

WORKDIR $SRC/serializers_fuzz_tests

COPY ./src $SRC/serializers_fuzz_tests/src
COPY ./libs $SRC/serializers_fuzz_tests/libs
COPY ./CMakeLists.txt $SRC/serializers_fuzz_tests
COPY .clusterfuzzlite/build.sh $SRC/
COPY .clusterfuzzlite/corpus_generator.py $SRC/

RUN cmake -B "/tmp/corpus_generator" \
      -DBUILD_CORPUS_GENERATOR=YES \
      -DCMAKE_C_COMPILER=clang \
      -DCMAKE_CXX_COMPILER=clang++ && \
    cmake --build "/tmp/corpus_generator" --parallel && \
    python $SRC/corpus_generator.py "$SRC/serializers_fuzz_tests" && \
    rm -rf "/tmp/corpus_generator"
