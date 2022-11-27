#include <memory>

struct Knoop;

struct Knoop {
    std::unique_ptr<Knoop> links, rechts;
    int waarde;
};

class Boom {
    public: 
        Boom(){};
        bool zoek(const int waarde);
        void voegToe(int waarde);
        
    private:   
        std:: unique_ptr<Knoop> wortel;
        void voegToe(const int waarde, std::unique_ptr<Knoop> &k);
        bool zoek(int waarde, std::unique_ptr<Knoop> &k);
};
