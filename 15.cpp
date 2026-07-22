// Problem ID: 015 | Difficulty: Medium
// Title: Random Motivational Quote Generator
// Category: Random Number Generator + Switch Statement

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));

    int random=rand()%10 + 1;

    switch (random)
    {
        case 1:
            cout << "Never give up!";
            break;

        case 2:
            cout << "Dream big, work hard.";
            break;

        case 3:
            cout << "Success comes from consistency.";
            break;

        case 4:
            cout << "Believe in yourself.";
            break;

        case 5:
            cout << "Small steps every day lead to big results.";
            break;

        case 6:
            cout << "Discipline beats motivation.";
            break;

        case 7:
            cout << "Stay focused on your goal.";
            break;

        case 8:
            cout << "Every expert was once a beginner.";
            break;

        case 9:
            cout << "Learn something new every day.";
            break;

        case 10:
            cout << "Your future depends on what you do today.";
            break;

        default:
            cout << "Keep moving forward!";
    }






    return 0;
}