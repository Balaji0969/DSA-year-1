// Problem ID: 001 | Difficulty: Easy 
// Title: Number Analyzer
// Category: Decision Making

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter a Number: "<<endl;
    cin>>num;

    if(num<0){
        cout<<"Negative Number";
    }
    else if(num==0){
        cout<<"ZERO AND YOU ARE A HERO";
    }
    else {
    cout << "Positive Number";
}

    if (num % 2 == 0) {
        cout << num << " is an Even number." << endl;
    } 
    else {
        cout << num << " is an Odd number." << endl;
    }


    return 0;
}
