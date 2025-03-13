#ifndef KYSYMYS_H
#define KYSYMYS_H
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class kysymys {
public:
    string kysymysTeksti;
    string vaihtoehdot[4];
    char oikeaVastaus;

    // Konstruktori
    kysymys(string teksti, string vaihtikset[4], char oikein) {
        kysymysTeksti = teksti;
        for (int i = 0; i < 4; i++) {
            vaihtoehdot[i] = vaihtikset[i];
        }
        oikeaVastaus = oikein;
}

    // Tulostetaan kysymys ja vaihtoehdot
    void tulostaKysymys() {
        cout << kysymysTeksti << "\n";
        for (int i = 0; i < 4; i++) {
            cout << vaihtoehdot[i] << "\n";
        }
    }

    // Tarkistetaan onko vastaus oikein
    bool onkoOikein(char vastaus) {
        return vastaus == oikeaVastaus;
}
};

#endif
