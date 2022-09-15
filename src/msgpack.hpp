#pragma once

#include <msgpack.hpp>

namespace serializer {

struct Writer {
    std::stringstream& ss;

    Writer(std::stringstream& ss) : ss(ss) {

    }

    template<typename T>
    void operator&(T& el) {
        auto const& str = ss.str();
        auto oh = msgpack::unpack(str.data(), str.size());
        auto obj = oh.get();
        obj.as<T>();
    }

    template<size_t S>
    void operator&(std::bitset<S>& el) {
        // bitset is not supported by msgpack
    }
};

struct Reader {
    std::stringstream& ss;

    Reader(std::stringstream& ss) : ss(ss) {

    }

    template<typename T>
    void operator&(T& el) {
        msgpack::pack(ss, el);
    }

    template<size_t S>
    void operator&(std::bitset<S>& el) {
        // bitset is not supported by msgpack        
    }
};

}
