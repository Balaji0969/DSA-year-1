// Problem ID: 035 | Difficulty: Medium
// Title: Replace Array Element
// Project Type: Array Searching and Modification

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    int index;
    int newValue;

    cout << "Enter index: ";
    cin >> index;

    if(index < 0 || index >= size)
    {
        cout << "Invalid index" << endl;
        return 0;
    }

    cout << "Enter new value: ";
    cin >> newValue;

    arr[index] = newValue;

    cout << "Updated array:" << endl;

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}