#ifndef visa
#define visa
#include "kysymysClass.c"
#include <vector>
#include <fstream>
#include <algorithm>
#include <cctype>


class visa {
private:
    int pisteet;
    int kysymysAtm;
    vector<kysymys> kysymykset;
public:
    visa(): pisteet(0), kysymysAtm(0) {}

    //lis�t��n kysymys vektoriin
    void lis��Kysymys(kysymys k) {
    kysymykset.push_back(k);
    }

    //LATAA
    void lataaPeli() {
        ifstream inFile("tallennus.txt");
        if (inFile.is_open()) {
            inFile >> kysymysAtm >> pisteet;
            inFile.close();
            cout << "Peli ladattu." << ".\n";
        } else {
            cout << "Ei aikaisempaa tallennusta, uusi peli.\n";
        }
    }

    //TALLENNNA
    void tallennaPeli() {
        ofstream outFile("tallennus.txt");
        if (outFile.is_open()) {
            outFile << kysymysAtm << " " << pisteet;
            outFile.close();
            cout << "Peli tallennettu.\n";
        } else {
            cout << "Virhe.\n";
        }
    }

    void aloitaPeli() {
    for (kysymysAtm < kysymykset.size(); kysymysAtm++) {
        kysymykset[kysymysAtm].tulostaKysymys();
        char vastaus;
        cout << "Vastaus a, b, c tai d: ";
        cin >> vastaus;
        vastaus = tolower(vastaus); //muuttaa vastauksen pieneksi kirjaimeksi
        if (kysymykset[kysymysAtm].isCorrect(vastaus)) {
            cout << "Oikein, +1 piste!\n";
            pisteet++;
        } else {
        cout << "V��r� vastaus.\n";
        }
        tallennaPeli();
    }
    }

    void n�yt�Pisteet() {
    cout << "P��sit pelin l�pi, lopulliset pisteesi: " << pisteet << "pistett�." << "\n";
    }

    void highscore() {
    string nimi;
    cout << "Anna nimesi, kansiossa on highscore lista parhaista tuloksista.";
    cin >> nimi;

    ofstream outfile("highscores.txt");
    if (outFile.is_open()) {
        outFile << name << pisteet << "Pistett�.";
        outFile.close();
        cout << "Tulos tallennettu! K�y katsomassa highscores.txt.\n ";
    } else {
    cout << "Virhe.\n";
    }
    }

};
#endif
