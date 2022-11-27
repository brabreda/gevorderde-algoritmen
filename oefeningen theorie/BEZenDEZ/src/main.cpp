#include "boom.h"
#include "graaf.h"
#include <time.h> 
#include <iostream>
#include <vector>
#include <fstream>

void tekenBoom(const char* bestandsnaam,std::vector<std::pair<int,int>> pairs) {
    std::ofstream uit(bestandsnaam);
    uit << "digraph {\n";
    for(auto p : pairs){
        uit << p.first << " -> " << p.second << "\n";
    }
    uit << "}";
}

int main(){
    Boom boom;

    srand (time(NULL));

    std::vector<int> waardes{ 47,21,49,45,31,20,23,43,40,46,50,39,29,16,30 };
    for(int waarde : waardes){

        boom.voegToe(waarde);
    }

    std::cout << "Is 40 aanwezig in boom: "<< boom.zoek(40) << std::endl;
    std::cout << "Is 40 aanwezig in boom: "<< boom.zoek(5) << std::endl;  

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

    auto BEZ = graaf.opspannendeBoomBEZ(11);

    tekenBoom("../BEZ.dot",BEZ);

    auto DEZ = graaf.opspannendeBoomDEZ(11);

    tekenBoom("../DEZ.dot",DEZ);

    return 0;
}