// armstrommg no
#include <iostream>
using namespace std;
int main() {
    int n, original, remainder, result = 0;
    cout << "Enter an integer: ";
    cin >> n;

    original = n; // Store the original number

    // Calculate the sum of the cubes of the digits
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        result += remainder * remainder * remainder; // Add the cube of the digit to the result
        n /= 10; // Remove the last digit
    }

    // Check if the original number is equal to the sum of the cubes of its digits
    if (original == result) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }

    return 0;
}