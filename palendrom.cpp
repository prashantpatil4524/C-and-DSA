// pallendrom no programm
#include<iostream>
using namespace std;
int main(){
    int n, original, reversed = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;

    original = n; // Store the original number

    // Reverse the number
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        n /= 10; // Remove the last digit
    }

    // Check if the original number is equal to its reverse
    if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}