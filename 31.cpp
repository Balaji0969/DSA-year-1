// Problem ID: 031 | Difficulty: Medium
// Title: Rock Paper Scissors
// Project Type: Interactive Game Simulation

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void display()
{
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
}

string choiceName(int n)
{
    switch(n)
    {
        case 1:
            return "Rock";

        case 2:
            return "Paper";

        case 3:
            return "Scissors";
    }

    return "Wrong choice";
}

int checkWinner(int player, int computer)
{
    if(player == computer)
        return 0;

    if(player == 1 && computer == 3)
        return 1;

    if(player == 2 && computer == 1)
        return 1;

    if(player == 3 && computer == 2)
        return 1;

    return 2;
}

void result(int winner)
{
    switch(winner)
    {
        case 0:
            cout << "Draw!" << endl;
            break;

        case 1:
            cout << "You Win!" << endl;
            break;

        case 2:
            cout << "Computer Wins!" << endl;
            break;
    }
}

int main()
{
    srand(time(0));

    int player, computer;
    char again;

    do
    {
        cout << "Rock Paper Scissors" << endl;

        display();

        cout << "Enter choice: ";
        cin >> player;

        if(player < 1 || player > 3)
        {
            cout << "Invalid choice!" << endl;
            continue;
        }

        computer = rand() % 3 + 1;

        cout << "You: " << choiceName(player) << endl;
        cout << "Computer: " << choiceName(computer) << endl;

        int winner = checkWinner(player, computer);

        result(winner);

        cout << "Play again? (y/n): ";
        cin >> again;

    } while(again == 'y' || again == 'Y');

    cout << "Game Over!" << endl;

    return 0;
}