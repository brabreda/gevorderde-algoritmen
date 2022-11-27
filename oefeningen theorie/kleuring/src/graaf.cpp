#include "graaf.h"
#include <vector>
#include <queue>
#include <tuple>

Graaf::Graaf(int aantal_knopen){
    this->burenlijsten.resize(aantal_knopen+1,std::vector<int>());
}

void Graaf::voegVerbindingToe(int knoopnummer1, int knoopnummer2){
    this->burenlijsten[knoopnummer1].push_back(knoopnummer2); 
    this->burenlijsten[knoopnummer2].push_back(knoopnummer1);
}


std::map<int,int>  Graaf::sequentieleKleuring(){

    std::map<int,int> m;

    // O(q)
    for (size_t i = 1; i < this->burenlijsten.size(); i++)
    {
        m[i] = i;
    }
    
    for (size_t i = 1; i < this->burenlijsten.size(); i++)
    {   
        bool juiste_c = false;
        int c = 1;
        while(!juiste_c){
            
            auto burenlijst = this->burenlijsten[i];
            std::sort(burenlijst.begin(), burenlijst.end(),[&m](int b1,int b2){
                return m[b1] < m[b2];
            });

            bool gevonden = false;
            for(auto x : burenlijst){
                gevonden = gevonden || m[x] == c;
            }

            if(!gevonden){
                m[i] = c;
                juiste_c = true;
            } 
            c++;
        }       
    }
    return m;
}