#include <vector>
#include <memory>
#include <map>


struct Knoop;




class Graaf {

    public:
        std::vector<std::vector<int>> burenlijsten;
        Graaf(int aantal_knopen);
        void voegVerbindingToe(int knoopnummer1, int knoopnummer2);
        std::map<int,int> sequentieleKleuring();

    private:
        // vector index komt overeen met het knoopnummer
        
};


