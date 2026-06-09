// see weather it is triangle or not
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if the sum of any two sides is greater than the third side
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The given sides form a triangle." << endl;
    } else {
        cout << "The given sides do not form a triangle." << endl;
    }

    return 0;
}