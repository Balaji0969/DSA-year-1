// Problem ID: 027 | Difficulty: Easy
// Title: Find Maximum of Three Numbers
// Category: User-Defined Function + Parameters + Return + If/Else

#include <iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    if(a >= b && a >= c)
    {
        return a;
    }
    else if(b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int result = maximum(a, b, c);

    cout << "Maximum = " << result;

    return 0;
}