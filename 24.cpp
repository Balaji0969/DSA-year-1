// Problem ID: 024 | Difficulty: Easy
// Title: Add Two Numbers
// Category: User-Defined Function + Parameters + Return

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = add(a, b);

    cout << "Sum = " << result;

    return 0;
}