#ifndef visaH
#define visaH
#include <iostream>
#include "kysymysClass.h"
#include <vector>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


class visa {
private:
    int pisteet;
    int kysymysAtm;
    int hp;
    vector<kysymys> kysymykset;
public:
visa(): pisteet(0), kysymysAtm(0), hp(3) {} //construct

    void lisaaKysymys(kysymys k) {
    kysymykset.push_back(k);
    }

    // LATAA
    void lataaPeli() {
        ifstream inFile("tallennus.txt");
        if (inFile.is_open()) {
            inFile >> kysymysAtm >> pisteet >> hp;

            if (inFile.fail()) {
                kysymysAtm = 0;
                pisteet = 0;
                hp = 3;
                //cout << "Starting a new game.\n";

            } else {
                cout << "Save game loaded\n";
                cout << "Question number: " << kysymysAtm +1 << "\n\n";
            }

            inFile.close();
        } else {
            cout << "Starting a new game.\n\n";
    }
    }


    //TALLENNNA
    void tallennaPeli() {
        ofstream outFile("tallennus.txt");
        if (outFile.is_open()) {
            outFile << kysymysAtm << " " << pisteet << " " << hp;
            outFile.close();
            //cout << "Progress saved.\n";
        } else {
            cout << "Error.\n";
        }
    }

    //TYHJENNƒ TALLENNUS PELIN LOPUSSA
    void tyhjennaTallennus() {
    ofstream outFile("tallennus.txt", ios::trunc);
    if (outFile.is_open()) {
        outFile.close();
        cout << "Game progress cleared.\n";
    } else {
        cout << "Error.\n";
    }
}


    void aloitaPeli() {
    srand(time(0)); // random seed
    random_shuffle(kysymykset.begin(), kysymykset.end()); //shuffle

    bool ekaKysymys = true;

    for (; kysymysAtm < kysymykset.size() && hp > 0;) {

        if (ekaKysymys) {
        cout << R"(
 __          __  _                            _                      _                 _               _         _
 \ \        / / | |                          | |                    (_)               | |             (_)       | |
  \ \  /\  / ___| | ___ ___  _ __ ___   ___  | |_ ___     __ _ _ __  _ _ __ ___   __ _| |   __ _ _   _ _ _______| |
   \ \/  \/ / _ | |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \   / _` | '_ \| | '_ ` _ \ / _` | |  / _` | | | | |_  |_  | |
    \  /\  |  __| | (_| (_) | | | | | |  __/ | || (_) | | (_| | | | | | | | | | | (_| | | | (_| | |_| | |/ / / /|_|
     \/  \/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/   \__,_|_| |_|_|_| |_| |_|\__,_|_|  \__, |\__,_|_/___/___(_)
                                                                                              | |
                                                                                              |_|
Answer each question with a, b, c, or d. Just 1 letter, only the first one is accepted. You have 3 lives, good luck!

)" << "\n";

            cout << "------------------------------------\n";
            cout << "|  HP: " << hp << "   |  Points: " << pisteet << "  |\n";
            cout << "------------------------------------\n\n";

        } else {
        system ("cls"); //vaan windows

            cout << "------------------------------------\n";
            cout << "|  HP: " << hp << "   |  Points: " << pisteet << "  |\n";
            cout << "------------------------------------\n\n";
        }



        kysymykset[kysymysAtm].tulostaKysymys();
        char vastaus;

        while (true) {
            cout << "Answer (a, b, c, or d): ";
            cin >> vastaus;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n'); //ylim‰‰r‰set pois
                cout << "Bad input! Enter only a, b, c, or d.\n\n";
                continue;
            }

            vastaus = tolower(vastaus);

            if (vastaus == 'a' || vastaus == 'b' || vastaus == 'c' || vastaus == 'd') {
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clear extra input ? WORKS
                break;
            }

            cout << "Bad input! Enter only a, b, c, or d.\n\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        if (kysymykset[kysymysAtm].onkoOikein(vastaus)) {
            cout << "\nCorrect, +1 point!\n\n";
            pisteet++;
        } else {
            cout << "\nWrong! -1 HP!\n\n";
            hp--;
        }
            /*if (hp > 0) {
                cout << "You have " << hp << "HP left. \n\n";
            }*/
        cout << "Press Enter to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        kysymysAtm++;
        tallennaPeli();

        ekaKysymys = false;
    }
        if (hp == 0) {
        cout << "\nGame over! You ran out of lives. You got " << pisteet << " points!" << "\n\n";
    } else {
        cout << "Congratulations! You answered all questions! You got " << pisteet << " points!" << "\n\n";
    }
    highscore();
}


    /*void naytaPisteet() {
    cout << "You finished the game, your points are: " << pisteet << " points." << "\n";
    }*/

    void highscore() {
    string nimi;
    cout << "Give your first name for the scoreboard: ";
    cin >> nimi;
    cout << "\n";

    ofstream outFile("highscores.txt", ios::app); //ios::app ei kirjoita vanhan p‰‰lle
    if (outFile.is_open()) {
        outFile <<"- " << nimi << " " << pisteet << " Points.\n";
        outFile.close();
        cout << "Highscore saved! Go check out highscores.txt. Thanks for playing!\n\n";
        cout << R"(                     __         __
                    /  \.-"""-./  \
                    \    -   -    /
                    |   o   o    |
                    \  .-'''-.  /
                     '-\__Y__/-'
                        `---`)";
        cout << "\n\n";
    } else {
    cout << "Error.\n";
    }
    tyhjennaTallennus();
    return;
    }

};
#endif
