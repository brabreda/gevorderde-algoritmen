#include <iostream>
#include <memory>
#include <string>
#include <vector>

using std::string;

struct TZKnoop;

struct TZKnoop {
    std::unique_ptr<TZKnoop> kleiner, gelijk, groter;
    char c;
    bool in_boom;

    std::string tekenKnoop(std::ostream &uit, int &knoopteller);
};

class TernaireZoekboom {

  public:
    TernaireZoekboom();
    void voegtoe(string woord);
    bool zoek(string woord);
    void teken(const char *bestandsnaam) const;
    std::vector<string> auto_complete(string prefix);
    std::vector<string> auto_complete_wildcard(string prefix);

  private:
    std::unique_ptr<TZKnoop> wortel;

    void voegtoe(string woord, int i, std::unique_ptr<TZKnoop> &knoop);
    bool zoek(string woord, int i, std::unique_ptr<TZKnoop> &knoop);
    void auto_complete(string &prefix, int i, std::unique_ptr<TZKnoop> &knoop, std::vector<string> &woorden);
    void fill_auto_complete(string t, std::unique_ptr<TZKnoop> &knoop, std::vector<string> &woorden);
};
