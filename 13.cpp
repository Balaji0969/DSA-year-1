// Problem ID: 013 | Difficulty: Easy
// Title: Multiplication Table
// Category: For Loop

#include <iostream>
using namespace std;

int main()
{
    int num;
    int result;

    cout << "Enter table number (1-10): ";
    cin >> num;

    if(num >= 1 && num <= 10)
    {
        for(int i = 1; i <= 10; i++)
        {
            result=num*i;
            cout << result<< endl;
        }
    }
    else
    {
        cout << "Sorry! Only tables from 1 to 10 are available.";
    }

    return 0;
}
 
