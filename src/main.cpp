
#include <fstream>
#include <sstream>
#include <iostream>
#include <set>
#include <vector>
#include <stdio.h>
#include <unistd.h>
#include <array>
#include <set>

#include <yas/serialize.hpp>
#include <yas/std_types.hpp>

#include <cereal/types/unordered_map.hpp>
#include <cereal/types/memory.hpp>
#include <cereal/types/vector.hpp>
#include <cereal/types/string.hpp>
#include <cereal/types/set.hpp>
#include <cereal/types/map.hpp>
#include <cereal/archives/binary.hpp>

#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/basic_archive.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/set.hpp>
#include <boost/serialization/map.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/array.hpp>

struct SerializedData {
    uint8_t uint8;
    uint16_t uint16;
    uint32_t uint32;
    uint64_t uint64;
    std::string string;
    std::vector<std::string> string_vector;
    std::vector<uint8_t> uint8_vector;
    std::set<uint8_t> uint8_set;
    std::map<uint8_t, uint8_t> uint8_map;

    template <typename Archive>
    void serialize(Archive& ar)
    {
        ar & uint8;
        ar & uint16;
        ar & uint32;
        ar & uint64;
        ar & string;
        ar & string_vector;
        ar & uint8_vector;
        ar & uint8_set;
        ar & uint8_map;
    }
};

enum class SerializerType : uint8_t {
    BOOST_SERIALIZER = 0,
    CEREAL = 1,
    YAS = 2
};

enum class SerializedType : uint8_t {
    TEST_STRUCT = 0
};

template<class Serializer>
void deserialize(Serializer& serializer, const SerializedType& type) {
    SerializedData V2;
    V2.serialize(serializer);
}


void entrypoint(const std::vector<uint8_t>& data) {
    if(data.size() < 2) {
        return;
    }

    std::stringstream s;
    std::copy(data.begin() + 2, data.end(), std::ostream_iterator<uint8_t>(s));

    switch((SerializerType)data[0]) {
        case SerializerType::BOOST_SERIALIZER: 
        {
            cereal::BinaryInputArchive archive(s);
            deserialize(archive, SerializedType::TEST_STRUCT);
            break;
        }
        case SerializerType::CEREAL:
        {
            boost::archive::binary_iarchive archive(s);
            deserialize(archive, SerializedType::TEST_STRUCT);
            break;
        }
        case SerializerType::YAS:
        {
            yas::std_istream_adapter isadapter(s);
            yas::binary_iarchive<yas::std_istream_adapter> archive(isadapter);
            deserialize(archive, SerializedType::TEST_STRUCT);
            break;
        }
        default:
            return;
    }
}

#ifdef FUZZER
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    try {
        entrypoint(std::vector<uint8_t>(data, data + size));
    } catch(std::exception) {}
    return 0;
}
#else
int main() {    
    std::vector<uint8_t> data;
    uint8_t buffer[1024];
    ssize_t length=0;
    while((length = read(STDIN_FILENO, (char*)buffer, 1024)) > 0) {
        data.insert(data.end(), buffer, buffer+length);
        if (data.size() > (1<<20)) return false;
    }
    try {
        entrypoint(data);
    } catch(std::exception) {}
    return 0;
}
#endif