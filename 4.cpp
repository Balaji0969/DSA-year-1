// Problem ID: 004 | Difficulty: Medium 
// Title: Circle Calculator
// Category: Geometry



#include <iostream>
using namespace std;

int main() {

    const double PI = 3.14159;
    double radius;
    double area;
    double circumference;

    cout << "===== Circle Calculator =====" << endl;

    cout << "Enter the radius: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "\nArea: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    if (area < 100) {
        cout << "Small Circle" << endl;
    }
    else if (area == 100) {
        cout << "Medium Circle" << endl;
    }
    else {
        cout << "Large Circle" << endl;
    }

    return 0;
}
