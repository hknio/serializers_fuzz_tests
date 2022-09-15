#pragma once

#include <yas/serialize.hpp>
#include <yas/std_types.hpp>

namespace serializer {

struct Writer {
    yas::std_istream_adapter isadapter;
    yas::binary_iarchive<yas::std_istream_adapter> archive;

    Writer(std::istream& istream) : isadapter(istream), archive(isadapter) {

    }

    template<typename T>
    void operator&(T& el) {
        archive & el;
    }
};

struct Reader {
    yas::std_ostream_adapter osadapter;
    yas::binary_oarchive<yas::std_ostream_adapter> archive;

    Reader(std::ostream& ostream) : osadapter(ostream), archive(osadapter) {

    }

    template<typename T>
    void operator&(T& el) {
        archive & el;
    }
};

}
