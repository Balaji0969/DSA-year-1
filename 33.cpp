// Problem ID: 033 | Difficulty: Easy-Medium
// Title: Linear Search
// Project Type: Array Searching

#include <iostream>
using namespace std;

int main()
{

    int num;

    int arr[]={12,45,23,67,34,89,10};

    cout<<"Enter the element u want to find: ";
    cin>>num;

    

for(int i=0;i<7;i++){

    if(arr[i] == num)
{
    cout << "Element found at index " << i << endl;
}
else{
    cout<<"Not found";
}

}
    return 0;
}