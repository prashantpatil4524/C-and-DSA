// return is it upper case or lower case or title case

#include <cctype>
#include <string>
#include <iostream>
using namespace std;

string detectCase(char c) {
    if (isupper(c)) {
        return "Upper Case";
    } else if (islower(c)) {
        return "Lower Case";
    } else {
        return "Not a letter";
    }
}

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "The character is: " << detectCase(c) << endl;
    return 0;
}