#include "fietsnet.h"
#include <fstream>
#include <sstream>
#include <string>
#include <set>
#include <list>
#include <queue>

#include "csv.hpp"

KnooppuntGraafMetInfo leesGraaf()
{
    KnooppuntGraaf g;
    csv::CSVReader knooppunten_in("knooppunten.csv");

    std::map<int, int> knoopnrs;

    for (auto &row : knooppunten_in)
    {
        int graaf_knoopnr = g.voegKnoopToe({row["geoid"].get<int>(),
                                            row["knoopnr"].get<int>(),
                                            row["naam"].get<std::string>(),
                                            row["lat"].get<double>(),
                                            row["lon"].get<double>()});
        knoopnrs[row["geoid"].get<int>()] = graaf_knoopnr;
    }

    csv::CSVReader trajecten_in("trajecten.csv");
    for (auto &row : trajecten_in)
    {
        g.voegVerbindingToe(knoopnrs[row["begin_geoid"].get<int>()],
                            knoopnrs[row["end_geoid"].get<int>()],
                            row["lengte_m"].get<double>());
    }

    return {g, knoopnrs};
}

std::list<KortstePadStap>
kortstePad(const KnooppuntGraaf &g, int start_nr, int eind_nr)
{

    // VUL AAN
    return {};
}

std::list<KortstePadStap>
kortstePadBidirectioneel(const KnooppuntGraaf &g, int start_nr, int eind_nr)
{

    // VUL AAN
    return {};
}
