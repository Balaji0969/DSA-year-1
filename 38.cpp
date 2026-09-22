// Problem ID: 038 | Difficulty: Easy
// Title: Array Maximum
// Project Type: 1D Array + Comparison

#include <iostream>
using namespace std;

int main() {

    int numbers[] = {25, 72, 15, 90, 43, 61};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    int largest = numbers[0];

    for (int i = 1; i < size; i++) {

        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "Largest number: " << largest << endl;

    return 0;
}