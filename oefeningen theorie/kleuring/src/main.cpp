#include "graaf.h"
#include <time.h> 
#include <iostream>
#include <vector>
#include <fstream>
#include <tuple>

void tekenBoom(const char* bestandsnaam, std::vector<std::vector<int>> &burenlijsten, std::map<int,int> mapping) {
    std::ofstream uit(bestandsnaam);
    uit << "graph {\n";
    for(size_t i = 1; i < burenlijsten.size(); i++)
    {
        uit << i << " [xlabel=\"" << mapping[i] << "\"];\n";
    }
    for (size_t i = 1; i < burenlijsten.size(); i++)
    {
        for (size_t j = 0; j < burenlijsten[i].size(); j++)
        {
            if(i < burenlijsten[i][j]){
                uit << i << " -- " << burenlijsten[i][j] /* << " [label=\"" << std::get<2>(p) << "\"];" */ << "\n";
            }         
        }
    }
    uit << "}";
}

int main(){

    Graaf graaf(11);
    graaf.voegVerbindingToe(1,4);
    graaf.voegVerbindingToe(1,11);
    graaf.voegVerbindingToe(4,7);
    graaf.voegVerbindingToe(4,5);
    graaf.voegVerbindingToe(11,2);
    graaf.voegVerbindingToe(2,3);
    graaf.voegVerbindingToe(11,5);
    graaf.voegVerbindingToe(5,6);
    graaf.voegVerbindingToe(5,10);
    graaf.voegVerbindingToe(6,10);

    auto mapping = graaf.sequentieleKleuring();

    tekenBoom("../kleuring.dot", graaf.burenlijsten, mapping);

    return 0;
}