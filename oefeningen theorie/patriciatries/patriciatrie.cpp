#include <memory>
#include <bitset>
class knoop {
    public:
        int index;

        std::bitset<4> b;
        std::unique_ptr<knoop> links, rechts;
        knoop * parent;

        knoop(int i, std::bitset<4> &b){
            index = i;
            b = b;
        };
};

class patriciatrie {
    public:
        std::unique_ptr<knoop> root;
        void voeg_sleutel_toe(std::bitset<4> &b);
    private:
        void voeg_sleutel_toe(std::bitset<4> &b, std::unique_ptr<knoop> &k, int getal);
};

void patriciatrie::voeg_sleutel_toe(std::bitset<4> &b){
    if(root == nullptr){
        root = std::make_unique<knoop>(4,b);
        root->parent = 0;
    } else {
        voeg_sleutel_toe(b, this->root, -1);
    }
}

void patriciatrie::voeg_sleutel_toe(std::bitset<4> &b, std::unique_ptr<knoop> &k, int getal){
    /*
        dalen af in de boom tot we onze nieuwe index niet meer groter is dan onze oude 
        -> dit wil zeggen dat we een knoop omhoog zijn gegaan
    */ 
    if(getal < k->index){
        if(b[k->index]){
            voeg_sleutel_toe(b,k->rechts, k->index);
        } else {
            voeg_sleutel_toe(b,k->links, k->index);
        }
    } else {
        /*
            Nu zoeken we op welke index ze verschillen
            Als deze index kleiner is dan de huidige index moeten we de knoop hogerop toevoegen
        */
        int i = 4;
        while(k->b[i] == b[i] && i >= 0){ i --; }
        
        if(i < k->index){
        } else{
            if(b[k->index]){
                //voeg de knoop rechts toe
            } else {
                //voeg de knoop links toe
            }
        }
    }

}

int main(){

    return 0;
}