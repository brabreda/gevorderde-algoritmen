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

ostream & operator<<(ostream &os, const HuffmanCode &code) {
    for (int i = code.lengte - 1; i >= 0; i--) {
        uint a = (code.voorstelling >> i) & 0x1;
        os << a;
    }
    return os;
}

map<char, uint> maakFrequentieTabel(istream &s) {
    map<char, uint> m;
    char c;
    
    while(s.get(c) && !s.fail()){
        m[c] ++; 
             
    }
    m[PSEUDO_EOF] = 1;

    return m;
}

map<char, HuffmanCode> maakCoderingsTabel(const HuffmanKnoop *wortel) {
    
    auto tabel = map<char, HuffmanCode>();

    maakCoderingsTabel(wortel, tabel, 0, 0);

    return tabel;
}
void maakCoderingsTabel(const HuffmanKnoop *knoop, map<char, HuffmanCode> &tabel, uint voorstelling, uint lengte) {

    if(knoop->c.has_value()){
        tabel[knoop->c.value()] = HuffmanCode({lengte, voorstelling});
    } else {
        lengte ++;

        voorstelling = voorstelling << 1;
        maakCoderingsTabel(knoop->links.get(), tabel, voorstelling, lengte);

        voorstelling += 1;
        maakCoderingsTabel(knoop->rechts.get(), tabel, voorstelling, lengte);
    }
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

    for( auto &a : freq){
        queue.push(make_shared<HuffmanKnoop>(HuffmanKnoop{a.first,a.second}));
    }
    
    while(queue.size() > 1){
        auto first = queue.top();
        queue.pop();
        auto second = queue.top();
        queue.pop();
        
        auto new_k = make_shared<HuffmanKnoop>();
        new_k->rechts = first;
        new_k->links = second;
        new_k->gewicht = first->gewicht + second->gewicht;

        queue.push(new_k);
    }
    return queue.top();
}

std::string codeerTekst(istream &input, const map<char, HuffmanCode> &codering) {
    obitstream out;

    char c;
    while(input.get(c)){
        auto h = codering.at(c);
        out.schrijfbits(h.voorstelling, h.lengte);
    }

    auto h = codering.at(PSEUDO_EOF);
    out.schrijfbits(h.voorstelling, h.lengte);
    
    return out.str();
}

void decodeerTekst(const std::string &input, const HuffmanKnoop *wortel, ostream &output) {
    ibitstream in(input);
    std::string s;

    while(!in.eof()){
        const HuffmanKnoop *k = wortel;
        while(!k->c.has_value()){
            if(in.leesbit()){
                k = k->rechts.get();
            } else{
                k = k->links.get();
            }
        }
        s.push_back(k->c.value());
    }

    output << s;
}