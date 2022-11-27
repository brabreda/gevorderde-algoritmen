#include "boom.h"


void Boom::voegToe(const int waarde){
    if(!this->wortel){
        wortel = std::make_unique<Knoop>();
        wortel->waarde = waarde;
    } else {
        voegToe(waarde, this->wortel);
    }
}

void Boom::voegToe(const int waarde, std::unique_ptr<Knoop> &k){
    if(k->links && k->waarde > waarde){
        // linkse knoop 
        voegToe(waarde, k->links);
    } else if(k->rechts){
        // Rechtse knoop
         voegToe(waarde, k->rechts);
    } else {

        if(k->waarde > waarde){
            k->links = std::make_unique<Knoop>();
            k->links->waarde = waarde;
        } else {
            k->rechts = std::make_unique<Knoop>();
            k->rechts->waarde = waarde;

        }
    }
}

bool Boom::zoek(int waarde){
    if(!this->wortel){
        return false;
    } else {
        return zoek(waarde, this->wortel);
    }
}

bool Boom::zoek(int waarde, std::unique_ptr<Knoop> &k){
    if( waarde == k->waarde){
        return true;
    } else {
        if(k->links && zoek(waarde, k->links)){
            return true;  
        }
        if(k->rechts && zoek(waarde, k->rechts)){
            return true;
        }
        return false;
    }
}
