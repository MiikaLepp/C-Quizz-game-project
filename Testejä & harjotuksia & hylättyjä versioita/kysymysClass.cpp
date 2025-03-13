#ifndef kysymys
#define kysymys
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class kysymys {
public:
    string kysymysTeksti;
    string vaihtoehdot[4];
    char oikeaVastaus;

    //konstruktori
    kysymys(string teksti, string vaihtikset[4], char oikein) {
    kysymysTeksti = teksti;
    for (int i = 0; i < 4; i++) {
        vaihtoehdot[i] = vaihtikset[i];
        }
        oikeaVastaus = oikein;
    }

    void tulostaKysymys() {
        cout << kysymysTeksti << "\n";
        for (int i = 0; i < 4; i++) {
            cout << vaihtoehdot[i] << "\n";
        }
}

    bool onkoOikein(char oikein) {
        return oikein == oikeaVastaus;
}
};
#endif
