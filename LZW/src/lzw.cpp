#include "lzw.h"
#include "bitstream.h"
#include "math.h"
#include <map>
#include <vector>
#include "unordered_map"
#include <iostream>


constexpr int DATABITS = 7;
constexpr int NUMBITS = 12;

using std::move;
using std::string;
using std::stringstream;

void initialiseer_encodeer_tabel(std::unordered_map<string, int> &tabel)
{
    for (int i = 0; i < (1 << DATABITS); i++)
    {
        string s;
        s += char(i);
        tabel[s] = i;
    }
}

std::string compress_lzw(const std::string &input)
{
    std::unordered_map<string, int> tabel;
    initialiseer_encodeer_tabel(tabel);
    int volgende_code = (1 << DATABITS) + 1;

    string vorige, huidig;
    obitstream out;

    for (char c : input)
    {
        vorige = huidig;
        huidig += c;

        if (tabel.find(huidig) == tabel.end())
        {
            // vorige was de laatste prefix die nog voorkwam in onze tabel
            out.schrijfbits(tabel[vorige], NUMBITS);
            tabel[huidig] = volgende_code++;

            huidig = "";
            huidig += c;
        }
    }
    out.schrijfbits(tabel[huidig], NUMBITS);
    out.schrijfbits((1 << DATABITS), NUMBITS);

    out.flush();
    return out.str();
}

void initialiseer_decodeer_tabel(std::unordered_map<int, string > &tabel, std::vector<std::string> &woordenlijst)
{
    for (int i = 0; i < (1 << DATABITS); i++)
    {
        string s;
        s += char(i);
        woordenlijst.push_back(s);
        tabel[i] = s;
    }
}

std::string decompress_lzw(const std::string &input)
{
    std::unordered_map<int, string> m;
    std::vector<std::string> woordenlijst;
    
    initialiseer_decodeer_tabel(m, woordenlijst);

    int map_index = (1 << DATABITS) + 1;

    ibitstream ibs(input);
    uint32_t bits = ibs.leesbits(12);
    
    std::string huidige, volgende, uitkomst;
    volgende = m[int(bits)];
    uitkomst.append(m[int(bits)]);  

    while( bits != (1 << DATABITS) ){
         

        if( std::find(woordenlijst.begin(), woordenlijst.end(), huidige + volgende[0]) == woordenlijst.end() && (huidige + volgende[0]) != ""){

            m[map_index] = huidige + volgende[0];
            woordenlijst.push_back(huidige + volgende[0]);
                
            map_index ++;

            uitkomst.append(m[int(bits)]);  
        }

        huidige = volgende;  
    
        bits = ibs.leesbits(12);
        
        if(m.count(int(bits))){
            volgende = m[int(bits)];
        } 
    }
    
    return uitkomst;
}