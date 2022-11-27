#include "graaf.h"
#include <time.h> 
#include <iostream>
#include <vector>
#include <fstream>
#include <tuple>

void tekenBoom(const char* bestandsnaam,std::vector<std::tuple<int, int, int>> pairs) {
    std::ofstream uit(bestandsnaam);
    uit << "digraph {\n";
    for(auto p : pairs){
        uit << std::get<0>(p) << " -> " << std::get<1>(p) << " [label=\"" << std::get<2>(p) << "\"];" << "\n";
    }
    uit << "}";
}

int main(){

    Graaf graaf(6);
    graaf.voegVerbindingToe(4,3,105);
    graaf.voegVerbindingToe(4,6,245);
    graaf.voegVerbindingToe(4,5,140);
    graaf.voegVerbindingToe(4,2,170);
    graaf.voegVerbindingToe(4,1,270);
    
    graaf.voegVerbindingToe(5,1, 137);
    graaf.voegVerbindingToe(5,3,206);
    graaf.voegVerbindingToe(5,2,135);
   
    graaf.voegVerbindingToe(6,2,180);
    graaf.voegVerbindingToe(6,3,306);
    graaf.voegVerbindingToe(6,5,85);

    graaf.voegVerbindingToe(3,2,210);
    graaf.voegVerbindingToe(2,1,112);
    graaf.voegVerbindingToe(6,1,139);
    graaf.voegVerbindingToe(3,1,300);

    auto min = graaf.minOpspannendeBoom();

    tekenBoom("../minOpspannendeBoom.dot", min);
    return 0;
}