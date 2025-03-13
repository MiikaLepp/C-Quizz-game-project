#include <iostream>
#include <string>
using namespace std;

int score = 0;

int main() {

        cout << "Welcome! \n" << endl;

    // Kysymykset
    string questions[10] = {
        "Which of the following is C++?",
        "What is 2 + 2?",
        "Which of the following is a loop in C++?",
        "What does 'void' mean in C++?",
        "Which is a valid function declaration in C++?",
        "What is the purpose of 'cin' in C++?",
        "What is a pointer in C++?",
        "Which operator is used for assignment in C++?",
        "What is a constructor in C++?",
        "Which of the following is a valid loop in C++?"
    };

    // Vastausvaihtoehdot
    string options[10][4] = {
        {"A. Programming language", "B. Animal", "C. City", "D. Mushroom"},
        {"A. 3", "B. 4", "C. 5", "D. 6"},
        {"A. for", "B. loop", "C. repeat", "D. until"},
        {"A. a data type", "B. no value", "C. a keyword", "D. an error"},
        {"A. int func()", "B. function int()", "C. func: int()", "D. int function()"},
        {"A. to output data", "B. to input data", "C. to declare variables", "D. to define a function"},
        {"A. a type of variable", "B. an address of another variable", "C. a function", "D. a keyword"},
        {"A. =", "B. ==", "C. :=", "D. =>"},
        {"A. a type of function", "B. a special function for initializing objects", "C. a class variable", "D. a keyword"},
        {"A. for", "B. until", "C. while", "D. both A and C"}
    };

    // Oikeat vastaukset
    char correctAnswers[10] = {'a' , 'b', 'a', 'b', 'a', 'b', 'a', 'a', 'b', 'd'};

    for (int i = 0; i < 10; i++) {
        cout << questions[i] << endl;

        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

    cout << "Your answer: ";
    char answer;
    cin >> answer;

    answer = tolower(answer); //iso kirjain pieneksi jos on

    if (!(answer == 'a' || answer == 'b' || answer == 'c' || answer == 'd')) {
    // This block executes if `answer` is NOT 'a', 'b', 'c', or 'd'
    cout << "Invalid input! Please enter A, B, C, or D.\n" << endl;
    i--;
    continue;
    }

    if (answer == correctAnswers[i]) {
        cout << "Correct! +1 point!\n" << endl;
        score++;

    } else {
        cout << "Incorrect.\n" << endl;

    }
}
    cout << "Thanks for playing!\n" << endl;
    cout << "Your final score is: " << score << " points.\n" << endl;
    if (score == 10) {
        cout << "Full score! excellent work, grade A++.";
        } else if (score >= 8) {
        cout << "Solid work, thats an A grade.";
        }
        else if (score >= 6) {
        cout << "Decent. B grade.";
        }
        else if (score >= 4) {
        cout << "Barely passed the test, grade is not C++, just a C.";
        }
        else {
        cout << "You did not pass the test, pathetic. Go back to study!";
        }

    return 0;
}
