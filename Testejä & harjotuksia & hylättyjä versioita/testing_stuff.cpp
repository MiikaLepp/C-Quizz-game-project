#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

int main () {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "numbers: ";
    for (int num : numbers) {
        cout << num;

    }
    cout << endl;
    return 0;
}
