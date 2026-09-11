//Problem ID: 022 | Difficulty: Medium
// Title: Number Guessing Game
// Category: Random Number Generator + While Loop + If/Else + Break

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100: ";

    while(true) {

        cin >> guess;

        if(guess == secret) {
            cout << "You Won!" << endl;
            break;
        }

        if(guess < secret) {
            cout << "Too Low! Try again: ";
        }
        else {
            cout << "Too High! Try again: ";
        }
    }

    return 0;
}