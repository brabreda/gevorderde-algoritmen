#include "fietsnet.h"
#include <fstream>
#include <sstream>
#include <string>
#include <set>
#include <list>
#include <vector>

#include "csv.hpp"

KnooppuntGraafMetInfo leesGraaf()
{

    KnooppuntGraaf g{};
    std::map<int, int> geoid_naar_knoopnr;
    std::vector<Fietsknooppunt> ongeldige_knooppunten;

    std::vector<int> knoopnrs;
    std::vector<int> overige_knoopnrs;

    csv::CSVReader knooppunten_in("knooppunten.csv");
    for (auto &row : knooppunten_in)
    {       
        Fietsknooppunt k = {    row["geoid"].get<int>(), 
                                row["knoopnr"].get<int>(), 
                                row["naam"].get<std::string>(),
                                row["lat"].get<double>(),
                                row["lon"].get<double>() };

        if(k.knoopnr >= 0)
        {
            geoid_naar_knoopnr[k.geoid] = k.knoopnr;
            g.voegKnoopToe(k);
            knoopnrs.push_back(k.knoopnr);
        } else{
            ongeldige_knooppunten.push_back(k);
        }
    }
    
    // Zoek den og niet gebruikte knoopnrs
    for(int i = 0; i < knoopnrs.size() + ongeldige_knooppunten.size(); i ++){
        auto it = find (knoopnrs.begin(), knoopnrs.end(), i);
        if (it == knoopnrs.end())
        {
            overige_knoopnrs.push_back(i);
        }
    }
    
    for( auto i : overige_knoopnrs){
        std::cout << i << " ";
    }

    std::cout << overige_knoopnrs.size() << " " << ongeldige_knooppunten.size()<< std::endl;
    /*
    std::sort(overige_knoopnrs.begin(),overige_knoopnrs.end());

    for(int i = 0; i < overige_knoopnrs.size(); i++){
        auto k = ongeldige_knooppunten[i];
        k.knoopnr = overige_knoopnrs[i];
        geoid_naar_knoopnr[k.geoid] = k.knoopnr;
        g.voegKnoopToe(k);
    }*/

    csv::CSVReader trajecten_in("trajecten.csv");
    for (auto &row : trajecten_in)
    {
        int begin_knoopnr = geoid_naar_knoopnr[row["begin_geoid"].get<int>()];
        int eind_knoopnr = geoid_naar_knoopnr[row["end_geoid"].get<int>()];

        if(g.geefTakdata(begin_knoopnr, eind_knoopnr) != 0){
            g.voegVerbindingToe(begin_knoopnr,eind_knoopnr);    
        }              
    }
    
    return {g, geoid_naar_knoopnr};
}

std::vector<GraafZoekStap>
breedte_eerst_zoeken(const KnooppuntGraaf &g, int start_nr, int max_diepte)
{
    std::vector<GraafZoekStap> resultaat;

    //VUL AAN

    return resultaat;
}
