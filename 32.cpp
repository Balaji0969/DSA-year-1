// Problem ID: 032 | Difficulty: Easy-Medium
// Title: Array Analyzer
// Project Type: Array Processing and Analysis

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 7, 24, 9, 16, 31, 8};

    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int smallest = arr[0];
    int even = 0;

    cout << "Elements:" << endl;

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;

        if(arr[i] > largest)
        {
            largest = arr[i];
        }

        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }

        if(arr[i] % 2 == 0)
        {
            even++;
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Even numbers = " << even << endl;
    cout<<"no of elements= "<<size<<endl;

    return 0;
}