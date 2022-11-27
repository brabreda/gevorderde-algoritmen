#include "graaf.h"
#include <vector>
#include <queue>
#include <tuple>

Graaf::Graaf(int aantal_knopen){
    this->burenlijsten.resize(aantal_knopen+1,std::map<int,int>());
}

void Graaf::voegVerbindingToe(int knoopnummer1, int knoopnummer2, int gewicht){
    this->burenlijsten[knoopnummer1][knoopnummer2] = gewicht; 
    this->burenlijsten[knoopnummer2][knoopnummer1] = gewicht;
}


std::vector<std::tuple<int, int, int>> Graaf::minOpspannendeBoom(){
    std::vector<std::tuple<int, int, int>> verbindingen;

    std::map<int,int> comp_lijst;

    // init lijst die aangeeft in welke knoop in welke comp behoord
    for(int i = 1; i < burenlijsten.size(); i++){
        comp_lijst[i] = i;
    }
    // dit zou efficienter kunnen maar door de voorstelling is 
    // die een burenlijst is is dit niet optimaal.
    for(int i = 1; i < burenlijsten.size()-1; i++){

        int kleinste = INT_MAX;
        std::tuple<int, int, int> kleinste_paar;
        for (int j = 1; j < burenlijsten.size(); j++)
        {
            for (auto &buur : burenlijsten[j])
            {
                if(buur.second < kleinste && comp_lijst[j] != comp_lijst[buur.first]){
                    kleinste = buur.second;
                    kleinste_paar = std::tuple<int, int, int>(j, buur.first, kleinste);
                }
            }
        }
        // indexen kunnen veranderen tijdens het mergen van 2 bomen.
        int van = comp_lijst[std::get<1>(kleinste_paar)];
        int naar = comp_lijst[std::get<0>(kleinste_paar)];

        for (auto &pair : comp_lijst)
        {
            if( pair.second == van){
                pair.second = naar;
            }
        }
        verbindingen.push_back(kleinste_paar);
    }
    return verbindingen;
}