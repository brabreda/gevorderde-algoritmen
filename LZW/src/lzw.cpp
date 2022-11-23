#include "lzw.h"
#include "bitstream.h"

constexpr int DATABITS = 7;
constexpr int NUMBITS = 12;

using std::move;
using std::string;
using std::stringstream;

std::string compress_lzw(const std::string &input)
{
    obitstream out;

    // VUL AAN

    out.flush();
    return out.str();
}

std::string decompress_lzw(const std::string &input)
{

    ibitstream ibs(input);

    // VUL AAN

    return "";
}