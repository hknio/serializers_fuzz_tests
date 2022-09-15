#pragma once

#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/basic_archive.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/set.hpp>
#include <boost/serialization/map.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/array.hpp>
#include <boost/serialization/bitset.hpp>
#include <boost/serialization/unordered_map.hpp>
#include <boost/serialization/unordered_set.hpp>
#include <boost/serialization/forward_list.hpp>
#include <boost/serialization/deque.hpp>
#include <boost/serialization/queue.hpp>
#include <boost/serialization/list.hpp>

namespace serializer {

struct Writer {
    boost::archive::binary_iarchive archive;

    Writer(std::istream& istream) : archive(istream) {

    }

    template<typename T>
    void operator&(T& el) {
        archive & el;
    }
};

struct Reader {
    boost::archive::binary_oarchive archive;

    Reader(std::ostream& ostream) : archive(ostream) {

    }

    template<typename T>
    void operator&(T& el) {
        archive & el;
    }
};

}
