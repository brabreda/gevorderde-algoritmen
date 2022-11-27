#include <vector>
#include <memory>
#include <map>


struct Knoop;




class Graaf {

    public:
        Graaf(int aantal_knopen);
        void voegVerbindingToe(int knoopnummer1, int knoopnummer2, int gewicht);
        std::vector<std::tuple<int, int, int>> minOpspannendeBoom();

    private:
        // vector index komt overeen met het knoopnummer
        std::vector<std::map<int,int>> burenlijsten;
};


