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
    obitstream out;
    // vul de tabel de normale karakters
    std::unordered_map<string, int> tabel;
    initialiseer_encodeer_tabel(tabel);
    int tabel_index = (1 << DATABITS) + 1;

    for(int i = 0; i < input.size(); i++) {

        std::string s;
        s.push_back(input.at(i));
        if(i+1 < input.size()){
            s.push_back(input.at(i+1));

            if(tabel.count(s) != 0){

                int x = 2;
                while(tabel.count(s) > 0 && i + x < input.size()){
                    s.push_back(input.at(i+x));
                    x +=1;
                }

                if( (i + x) != input.size()){
                    tabel[s] = tabel_index;
                    s.pop_back();
                    i += x-2;
                } else {
                    i += x;
                }

                out.schrijfbits(tabel[s] , NUMBITS);
                tabel_index++;

            } else {
                tabel[s] = tabel_index;

                s.pop_back();
                out.schrijfbits(tabel[s] , NUMBITS);
                
                tabel_index++;
            }
        } else {
            out.schrijfbits(tabel[s] , NUMBITS);
        }
    }
    out.schrijfbits((1 << DATABITS), 12);

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

    std::string s;

    while( bits != 80 ){
        s.append(m[int(bits)]);

        if( std::find(woordenlijst.begin(), woordenlijst.end(), s) == woordenlijst.end()){
            
            m[bits] = s;
            map_index ++;

            s = "";
        }

        
        bits = ibs.leesbits(12);
    }

    return "";
}