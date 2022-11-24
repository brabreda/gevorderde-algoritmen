#include "lzw.h"
#include "bitstream.h"
#include "math.h"
#include <map>
#include "unordered_map"


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
    obitstream out;

    // vul de tabel de normale karakters
    std::unordered_map<string, int> tabel;
    initialiseer_encodeer_tabel(tabel);
    int tabel_index = (1 << DATABITS) + 1;

    for(int i = 0; i < input.size(); i++) {

        std::string s;
        s.push_back(input.at(i));
        s.push_back(input.at(i+1));


        if(tabel.count(s) != 0){
            int x = 2;
            while(tabel.count(s) != 0 && i + x < input.size()){
                s.push_back(input.at(i+x));
                x +=1;
            }

            tabel[s] = tabel_index;
            s.pop_back();
            out.schrijfbits(tabel[s] , NUMBITS);
            i += x;
            tabel_index++;

        } else {
            tabel[s] = tabel_index;
            s.pop_back();
            out.schrijfbits(tabel[s] , NUMBITS);
            
            tabel_index++;
        }

    }

    out.flush();
    return out.str();
}

std::string decompress_lzw(const std::string &input)
{

    ibitstream ibs(input);

    // VUL AAN

    return "";
}