// Problem ID: 007 | Difficulty: Medium
// Title: Leap Year Checker
// Category: Conditional Statements

#include <iostream>
using namespace std;
int main(){
    
    int num1;

    cout<<"Enter the year: ";
    cin>>num1;

    if((num1%400 == 0)||(num1%4==0 && num1%100 !=0) )
    {

        cout<<"It is a leap year!";
    }
    else{
        cout<<"It is not a leap year!";
    }



    return 0;
}