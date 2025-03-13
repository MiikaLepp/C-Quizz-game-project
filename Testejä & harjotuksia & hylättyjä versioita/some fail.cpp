#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

int score = 0;

struct Question {
    string questionText;
    string options[4];
    char correctAnswer;
};

void askQuestions(vector<Question>& questions) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();//random_device rd oli aina sama järjestys, nyt kellon perusteella seed toimii oikein
    mt19937 g(seed);

    shuffle(questions.begin(), questions.end(), g);

    for (int i = 0; i < 10; i++) {
        const Question& q = questions[i];
        cout << q.questionText << endl;

        for (int j = 0; j < 4; j++) {
            cout << q.options[j] << endl;
        }

    cout << "Your answer: ";
    string answer;
    cin >> answer;


    if (answer.length() != 1 || !(answer == "a" || answer == "b" || answer == "c" || answer == "d")) {

    // jos vastaus on jotain muuta kuin a b c d, virheilmoitus ja kysymys uusiksi
    cout << "Invalid input! Please enter a, b, c, or d in lower case, and just one character.\n" << endl;
    i--;
    continue;
    }

    char answerChar = tolower(answer[0]); //iso kirjain pieneksi jos on

    if (answerChar == q.correctAnswer) {
        cout << "Correct! +1 point!\n" << endl;
        score++;

    } else {
        cout << "Incorrect.\n" << endl;

        }
    }
}

int main() {

        cout << "Welcome to C++ Quiz! All answers in lowercase. Answer options are a, b, c or d. Good luck!\n" << endl;

        vector<Question> questions = {
        {"Which of the following is a C++ keyword?", {"A. function", "B. class", "C. define", "D. void"}, 'b'},
        {"Which symbol is used for comments in C++?", {"A. //", "B. #", "C. /*", "D. --"}, 'a'},
        {"What is the output of 2 + 3 * 4?", {"A. 14", "B. 20", "C. 10", "D. 24"}, 'a'},
        {"What does 'cin' do in C++?", {"A. Input data", "B. Output data", "C. Define variables", "D. Initialize objects"}, 'a'},
        {"What is the default value of an uninitialized int variable in C++?", {"A. 0", "B. Garbage", "C. Undefined", "D. 1"}, 'b'},
        {"What is the correct way to declare a variable of type int?", {"A. int num;", "B. integer num;", "C. num int;", "D. var int num;"}, 'a'},
        {"Which of the following is used to loop through an array in C++?", {"A. for loop", "B. do-while loop", "C. while loop", "D. All of the above"}, 'd'},
        {"What is the correct way to declare a constant in C++?", {"A. constant num;", "B. const int num;", "C. num = 10;", "D. final int num;"}, 'b'},
        {"Which operator is used to access a member of a structure?", {"A. .", "B. ->", "C. &", "D. *"}, 'a'},
        {"What does 'endl' do in C++?", {"A. Ends a line", "B. Inserts a space", "C. Starts a new loop", "D. Defines an integer"}, 'a'},
        {"What is the correct way to include the standard library in C++?", {"A. #include <iostream>", "B. import <iostream>", "C. #include <stdio.h>", "D. import stdio.h"}, 'a'},
        {"Which of the following data types is used to store decimal values?", {"A. int", "B. double", "C. char", "D. bool"}, 'b'},
        {"What does the 'return' statement do in a function?", {"A. Exits the function", "B. Returns a value to the caller", "C. Loops the function", "D. None of the above"}, 'b'},
        {"Which loop runs at least once before checking the condition?", {"A. for loop", "B. do-while loop", "C. while loop", "D. foreach loop"}, 'b'},
        {"Which of these is NOT a valid C++ operator?", {"A. +", "B. &", "C. #", "D. %"}, 'c'},
        {"What is the correct way to declare a string variable?", {"A. string name;", "B. char name[10];", "C. string[10] name;", "D. name = string;"}, 'a'},
        {"Which of the following is used to compare two values in C++?", {"A. =", "B. =", "C. ==" , "D. !="}, 'c'},
        {"What is the purpose of the 'break' statement?", {"A. Exits the program", "B. Exits the loop", "C. Skips to the next iteration", "D. Ends the function"}, 'b'},
        {"Which keyword is used to define a function?", {"A. function", "B. def", "C. void", "D. int"}, 'c'},
        {"Which of the following is used to allocate memory dynamically in C++?", {"A. malloc()", "B. new", "C. alloc()", "D. create()"}, 'b'},
        {"What does the 'this' pointer refer to in C++?", {"A. Current function", "B. Current object", "C. Current array", "D. Current class"}, 'b'},
        {"What is the size of a char in C++?", {"A. 1 byte", "B. 2 bytes", "C. 4 bytes", "D. 8 bytes"}, 'a'},
        {"Which type of loop is guaranteed to run at least once?", {"A. while loop", "B. for loop", "C. do-while loop", "D. foreach loop"}, 'c'},
        {"Which of the following is used to terminate a loop early?", {"A. break", "B. return", "C. exit", "D. continue"}, 'a'},
        {"What type of value does a function with a 'void' return type return?", {"A. int", "B. bool", "C. None", "D. void"}, 'c'},
        {"How do you declare a pointer in C++?", {"A. int* ptr;", "B. ptr int;", "C. *int ptr;", "D. ptr* int;"}, 'a'},
        {"Which of these is used to create an array in C++?", {"A. array[]", "B. vector[]", "C. list[]", "D. int arr[]"}, 'd'},
        {"Which of these is a valid function declaration?", {"A. int myFunc()", "B. myFunc() int", "C. func(int)", "D. function()"}, 'a'},
        {"What is the result of the expression 10 / 3 in C++?", {"A. 3", "B. 3.33", "C. 3.5", "D. 4"}, 'a'},
        {"Which of these is NOT a valid variable name?", {"A. 1name", "B. _name", "C. name1", "D. Name"}, 'a'},
        {"Which of these is used to get input from the user?", {"A. cout", "B. cin", "C. input", "D. get"}, 'b'},
        {"What is the correct syntax to call a function named 'display()'?", {"A. display;", "B. display()", "C. call display()", "D. function display()"}, 'b'}
    };

    askQuestions(questions);


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
        cout << "Less than 4 points. You did not pass the test, pathetic. Go back to study!";
        }

        return 0;
}
