// Problem ID: 040 | Difficulty: Hard
// Title: Quiz
// Project Type: MCQ game
#include <iostream>
#include <string>
using namespace std;

int main() {

    string questions[5] = {
        "Which SpaceX rocket is designed to be fully reusable?",
        "What is the first index of an array?",
        "Which SpaceX spacecraft carries astronauts to the ISS?",
        "Which company developed the Falcon 9 rocket?",
        "What is stored at index 2 in an array containing 10, 20, 30, 40?"
    };

    string options[5][4] = {
        {"A. Falcon 9", "B. Starship", "C. Dragon", "D. Falcon Heavy"},
        {"A. 0", "B. 1", "C. 2", "D. -1"},
        {"A. Dragon", "B. Falcon 9", "C. Starlink", "D. Falcon Heavy"},
        {"A. NASA", "B. SpaceX", "C. Boeing", "D. Blue Origin"},
        {"A. 10", "B. 20", "C. 30", "D. 40"}
    };

    char answers[5] = {'B', 'A', 'A', 'B', 'C'};

    char userAnswer;
    int score = 0;

    cout << "=====================================\n";
    cout << "       SPACEX CODEGYM QUIZ \n";
    cout << "=====================================\n\n";

    for (int i = 0; i < 5; i++) {

        cout << "Question " << i + 1 << ":\n";
        cout << questions[i] << "\n\n";

        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << "\n";
        }

        cout << "\nEnter your answer (A/B/C/D): ";
        cin >> userAnswer;

        // Convert lowercase input to uppercase
        if (userAnswer >= 'a' && userAnswer <= 'd') {
            userAnswer = userAnswer - 32;
        }

        if (userAnswer == answers[i]) {
            cout << " Correct!\n";
            score++;
        }
        else {
            cout << " Wrong!\n";
        }

        cout << "-------------------------------------\n\n";
    }

    cout << "=====================================\n";
    cout << "           QUIZ COMPLETE!\n";
    cout << "=====================================\n";

    cout << "Your score: " << score << "/5\n";

    if (score == 5) {
        cout << " Perfect! SpaceX Engineer Level!\n";
    }
    else if (score >= 3) {
        cout << " Good job! Keep training!\n";
    }
    else {
        cout << " Keep learning and try again!\n";
    }

    return 0;
}