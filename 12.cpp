// Problem ID: 012 | Difficulty: Easy
// Title: Number Guessing Game
// Category: While Loop + Random Number Generator

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int secret = rand() % 50 + 1;
    int guess = 0;

    
    

    cout << "===== Number Guessing Game =====" << endl;
    cout << "Guess a number between 1 and 50." << endl;

    while (guess != secret)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (cin.fail())
        {
            cout << "Please enter a valid number!" << endl;
            cin.clear();
            continue;
        }

        if (guess > secret)
        {
            cout << "Too High!" << endl;
        }
        else if (guess < secret)
        {
            cout << "Too Low!" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number: " << secret << endl;
        }
    }

    return 0;
}