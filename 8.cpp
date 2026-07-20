// Problem ID: 008 | Difficulty: Medium
// Title: Triangle Validator
// Category: Geometry

#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;

    cout<<"Enter three sides of the triangle: ";
    cin>>num1>>num2>>num3;

    if((num1 + num2 > num3) &&
    (num1 + num3 > num2) &&
    (num2 + num3 > num1))
    {
        cout<<"It is a Triangle";
    }
else{
    cout<<"It is not a Triangle";
}
    return 0;
}