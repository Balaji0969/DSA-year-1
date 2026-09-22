// Problem ID: 034 | Difficulty: Medium
// Title: Count Occurrences
// Project Type: Array Searching and Frequency Counting

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 10, 30, 40, 10, 20};

    int size = sizeof(arr) / sizeof(arr[0]);

    int num;
    int count = 0;

    cout << "Enter number: ";
    cin >> num;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            count++;
        }
    }

    cout << num << " appears " << count << " times" << endl;

    return 0;
}