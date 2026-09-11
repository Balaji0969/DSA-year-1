//Problem ID: 023 | Difficulty: Medium
// Title: Rock Paper Scissors
// Category: Random Number Generator + Loop + Switch + If/Else

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int player, computer;
    char choice;

    do {
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;

        cout << "Enter your choice: ";
        cin >> player;

        computer = rand() % 3 + 1;

        cout << "Computer choice: " << computer << endl;

        if(player == computer) {
            cout << "Draw!" << endl;
        }
        else if(player == 1 && computer == 3) {
            cout << "You Win!" << endl;
        }
        else if(player == 2 && computer == 1) {
            cout << "You Win!" << endl;
        }
        else if(player == 3 && computer == 2) {
            cout << "You Win!" << endl;
        }
        else {
            cout << "Computer Wins!" << endl;
        }

        cout << "Do you want to play again? (yes/no): ";
        cin >> choice;

    } while(choice == 'no' || choice == 'No');

    cout << "Game Over!" << endl;

    return 0;
}