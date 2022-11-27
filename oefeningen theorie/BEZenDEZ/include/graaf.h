#include <vector>
#include <memory>
#include <map>


struct Knoop;




class Graaf {

    public:
        Graaf(int aantal_knopen);
        void voegVerbindingToe(int knoopnummer1, int knoopnummer2);
        std::vector<std::pair<int,int>> opspannendeBoomBEZ(int wortel);
        std::vector<std::pair<int,int>> opspannendeBoomDEZ(int wortel);

    private:
        // vector index komt overeen met het knoopnummer
        std::vector<std::vector<int>> burenlijsten;
        void opspannendeBoomDEZ(int knoop, std::vector<std::pair<int,int>> &pairs, std::vector<int> &knopen);
};


