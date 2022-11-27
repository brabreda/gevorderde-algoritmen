#include "graaf.h"
#include <vector>
#include <queue>

Graaf::Graaf(int aantal_knopen){
    this->burenlijsten.resize(aantal_knopen+1,std::vector<int>());
}

void Graaf::voegVerbindingToe(int knoopnummer1, int knoopnummer2){
    this->burenlijsten[knoopnummer1].push_back(knoopnummer2);
    this->burenlijsten[knoopnummer2].push_back(knoopnummer1);
}

std::vector<std::pair<int,int>> Graaf::opspannendeBoomBEZ(int wortel){

    std::vector<std::pair<int,int>> opspannende_boom;

    std::vector<int> knopen;
    knopen.push_back(11);

    std::queue<int> knopen_buffer;
    knopen_buffer.push(wortel);

    while (knopen_buffer.size())
    {   
        int v = knopen_buffer.front();
        knopen_buffer.pop();

        for (auto buur : burenlijsten[v])
        {
            if(std::find(knopen.begin(),knopen.end(), buur) == knopen.end()){
                knopen.push_back(buur);
                opspannende_boom.push_back(std::pair(v,buur));
                knopen_buffer.push(buur);
            }
        }
    } 
    return opspannende_boom;
}

std::vector<std::pair<int,int>> Graaf::opspannendeBoomDEZ(int wortel){
    std::vector<std::pair<int,int>> pairs;

    std::vector<int> knopen;
    knopen.push_back(wortel);

    opspannendeBoomDEZ(wortel, pairs, knopen);

    return pairs;
}

void Graaf::opspannendeBoomDEZ(int knoop, std::vector<std::pair<int,int>> &pairs, std::vector<int> &knopen){
    auto buren = this->burenlijsten[knoop];
    for(auto buur : buren){
        if(std::find(knopen.begin(),knopen.end(),buur) == knopen.end()){
            knopen.push_back(buur);
            pairs.push_back(std::pair(knoop,buur));
            opspannendeBoomDEZ(buur, pairs, knopen);
        }

    }
}