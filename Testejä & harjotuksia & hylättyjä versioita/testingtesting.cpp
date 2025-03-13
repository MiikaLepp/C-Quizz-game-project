#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

struct kysymys_laatikko {
    string text_diipa;
    string text_daapa;
    char kirjain;
};

int main () {
    kysymys_laatikko x = {"mikä homma?", "häh?", 'B'};
    cout << x.text_diipa << x.text_daapa;

    return 0;
}
