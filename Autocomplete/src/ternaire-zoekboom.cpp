#include "ternaire-zoekboom.h"
#include <fstream>
#include <sstream>
#include <cassert>
#include <iostream>


TernaireZoekboom::TernaireZoekboom(){}


void TernaireZoekboom::voegtoe(string woord){
     if(!wortel){
        wortel = std::make_unique<TZKnoop>();
        wortel->c = woord[0];
     }
     voegtoe(woord,0,wortel);
}

void TernaireZoekboom::voegtoe(string woord, int i, std::unique_ptr<TZKnoop> &knoop){
    std::unique_ptr<TZKnoop> *k;

    if(woord[i]){
        if(woord[i] == knoop->c){
            k  = &(knoop->gelijk);
            i++;
        } else if(woord[i] > knoop->c){
            k = &(knoop->groter);
        } else if(woord[i] < knoop->c){
            k = &(knoop->kleiner);
        }

        if(!*k && woord[i]){
            auto h = std::make_unique<TZKnoop>();
            h->c = woord[i];

            k->swap(h);     
        }
        if(i+1 == woord.size() && woord.back() == (*k)->c){
            (*k)->in_boom = true;
        }
                
        voegtoe(woord, i, *k);
    }
}

bool TernaireZoekboom::zoek(string woord){
    
    return zoek(woord,0,wortel);
}

bool TernaireZoekboom::zoek(string woord, int i, std::unique_ptr<TZKnoop> &knoop){
    std::unique_ptr<TZKnoop> *k;

    if(woord[i]){
        if(woord[i] == knoop->c){
            k  = &(knoop->gelijk);
            i++;
        } else if(woord[i] > knoop->c){
            k = &(knoop->groter);
        } else if(woord[i] < knoop->c){
            k = &(knoop->kleiner);
        }


        if(i == woord.size() && knoop->in_boom){
            return true;
        }
        if(*k){      
            return zoek(woord, i, *k);
        }
    }
    return false;
}


std::vector<string> TernaireZoekboom::auto_complete(string prefix){ 
    std::vector<string> woorden;

    auto_complete(prefix,0,wortel,woorden);
    return woorden;
}

void TernaireZoekboom::auto_complete(string &prefix, int i, std::unique_ptr<TZKnoop> &knoop, 
                                            std::vector<string> &woorden){
    std::unique_ptr<TZKnoop> *k;

    if(prefix[i]){
        if(prefix[i] == knoop->c){
            k  = &(knoop->gelijk);
            i++;
        } else if(prefix[i] > knoop->c){
            k = &(knoop->groter);
        } else if(prefix[i] < knoop->c){
            k = &(knoop->kleiner);
        }

        if(i == prefix.size() && knoop->gelijk){
            if(knoop->in_boom){   
                woorden.push_back(prefix);
            }
            fill_auto_complete(prefix,knoop->gelijk,woorden);
        } else {
            auto_complete(prefix, i, *k, woorden);
        }
    }
}

void TernaireZoekboom::fill_auto_complete(string t, std::unique_ptr<TZKnoop> &knoop, std::vector<string> &woorden){
    if(knoop->in_boom){
        string h = t;
        h.push_back(knoop->c);
        if(h == "aag"){
            std::cout << "raar";
        }
        woorden.push_back(h);      
    }
    if(knoop->kleiner){
        fill_auto_complete(t,knoop->kleiner,woorden);
    }
    if(knoop->gelijk){
        string h = t;
        h.push_back(knoop->c);
        fill_auto_complete(h,knoop->gelijk,woorden);
    }
    if(knoop->groter){
        fill_auto_complete(t,knoop->groter,woorden);
    }
}


std::vector<string> TernaireZoekboom::auto_complete_wildcard(string prefix){
    // VUL AAN
    return {};
}

std::string TZKnoop::tekenKnoop(std::ostream& uit, int& knoopteller){
    std::ostringstream wortelstring;
    wortelstring << '"' << this->c << ++knoopteller << '"';
    uit << wortelstring.str() << "[label=\"" << this->c << "\"]";
    if (this->in_boom){
        uit << "[color=red]";
    }
    uit << ";\n";

    string kleinerkind;
    string gelijkkind = "";
    string groterkind = "";
    if(this->kleiner){
        kleinerkind = this->kleiner->tekenKnoop(uit, knoopteller);
    }
    else{
        std::stringstream tel;
        tel << ++knoopteller;
        kleinerkind = "\"null"  + tel.str() + '"';
        uit << kleinerkind << " [shape=point];\n";
    }
    if(this->gelijk){
        gelijkkind = this->gelijk->tekenKnoop(uit, knoopteller);
    }
    else{
        std::stringstream tel;
        tel << ++knoopteller;
        gelijkkind = "\"null"  + tel.str() + '"';
        uit << gelijkkind << " [shape=point];\n";
    }

    if(this->groter){
        groterkind = this->groter->tekenKnoop(uit, knoopteller);
    }
    else{
        std::stringstream tel;
        tel << ++knoopteller;
        groterkind = "\"null"  + tel.str() + '"';
        uit << groterkind << " [shape=point];\n";
    }

    uit << wortelstring.str() << " -> " << kleinerkind << ";\n";
    uit << wortelstring.str() << " -> " << gelijkkind << ";\n";
    uit << wortelstring.str() << " -> " << groterkind << ";\n";
    
    // };
    return wortelstring.str();
}

void TernaireZoekboom::teken(const char* bestandsnaam) const{
    std::ofstream uit(bestandsnaam);
    uit << "digraph {\n";
    int knoopteller = 0;
    this->wortel->tekenKnoop(uit, knoopteller);
    uit << "}";
}

