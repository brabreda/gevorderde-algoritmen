#include "huffman.h"
#include <iostream>
#include <memory>
#include <optional>
#include <queue>
#include <vector>
using std::cout;
using std::make_shared;
using std::optional;
using std::priority_queue;
using std::shared_ptr;
using std::vector;

ostream &
operator<<(ostream &os, const HuffmanCode &code) {
    for (int i = code.lengte - 1; i >= 0; i--) {
        uint a = (code.voorstelling >> i) & 0x1;
        os << a;
    }
    return os;
}

map<char, uint> maakFrequentieTabel(istream &s) {
    // VUL AAN
    return {};
}

map<char, HuffmanCode> maakCoderingsTabel(const HuffmanKnoop *wortel) {
    // VUL AAN
    return {};
}

/**
 * Maakt een priority queue die Knoop-objecten teruggeeft volgens oplopend gewicht
 */
auto maak_priority_queue() {

    // Comparator die de gewichten van knopen met elkaar vergelijkt
    auto compare_gewicht = [](const auto &p1, const auto &p2) {
        return p1->gewicht > p2->gewicht;
    };

    return priority_queue<shared_ptr<HuffmanKnoop>,
                          vector<shared_ptr<HuffmanKnoop>>,
                          decltype(compare_gewicht)>{compare_gewicht};
}

shared_ptr<HuffmanKnoop> huffman(const map<char, uint> &freq) {
    auto queue = maak_priority_queue();

    // VUL AAN
    return {};
}

std::string codeerTekst(istream &input, const map<char, HuffmanCode> &codering) {
    // VUL AAN
    return "";
}

void decodeerTekst(const std::string &input, const HuffmanKnoop *wortel, ostream &output) {
    // VUL AAN
}