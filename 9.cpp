// Problem ID: 009 | Difficulty: Medium
// Title: Movie Ticket Eligibility
// Category: Decision Making

#include <iostream>
using namespace std;
int main(){

    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if(age<=12){
        cout<<"You are a child dear!";

    }
    else if(age>=13 && age<=59){
        cout<<"You are an adult";

    }
    else if(age>=60 && age<=120){
        cout<<"you are a senior citizen";
    }
    else{
        cout<<"INVALID AGE!";
    }

    return 0;
}