#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));

    int number;
    int guess;
    string difficulty;

    cout << "enter difficulty: ";
    cin >> difficulty;
    cout << endl;

    if (difficulty == "easy") {
        number = rand() % 100 + 1;
    }
    else if (difficulty == "medium") {
        number = rand() % 200 + 1;
    }
    else if (difficulty == "hard") {
        number = rand() % 300 + 1;
    }

    while (true) {
        cout << "enter your guess: ";
        cin >> guess;

        if (guess < number) {
            cout << "higher" << endl;
            cout << endl;
        }
        else if (guess > number) {
            cout << "lower" << endl;
            cout << endl;
        }
        else if (guess == number) {
            cout << "you win" << endl;
            break;
        }
    }
}
