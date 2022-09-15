#pragma once

#include <cereal/archives/binary.hpp>
#include <cereal/types/memory.hpp>
#include <cereal/types/vector.hpp>
#include <cereal/types/set.hpp>
#include <cereal/types/map.hpp>
#include <cereal/types/string.hpp>
#include <cereal/types/array.hpp>
#include <cereal/types/bitset.hpp>
#include <cereal/types/unordered_map.hpp>
#include <cereal/types/unordered_set.hpp>
#include <cereal/types/forward_list.hpp>
#include <cereal/types/deque.hpp>
#include <cereal/types/queue.hpp>
#include <cereal/types/list.hpp>
#include <cereal/types/tuple.hpp>
#include <cereal/types/utility.hpp>

namespace serializer {

struct Writer {
    cereal::BinaryInputArchive archive;

    Writer(std::istream& istream) : archive(istream) {

    }

    template<typename T>
    void operator&(T& el) {
        archive & el;
    }
};

struct Reader {
    cereal::BinaryOutputArchive archive;

    Reader(std::ostream& ostream) : archive(ostream) {

    }

    template<typename T>
    void operator&(T& el) {
        archive & el;
    }
};

}
