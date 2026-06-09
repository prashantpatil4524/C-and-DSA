// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n % 2 == 0) {
//         cout << n << " is even." << endl;
//     } else {
//         cout << n << " is odd." << endl;
//     }

//     return 0;
// }


//even odd no in bitwise operator and operator 
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     // Using bitwise AND operator
//     if (n & 1) {
//         cout << n << " is odd." << endl;
//     } else {
//         cout << n << " is even." << endl;
//     }

//     return 0;
// }

//with bitwise operator or operator
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Using bitwise OR operator
    if (n | 1) {
        cout << n << " is odd." << endl;
    } else {
        cout << n << " is even." << endl;
    }

    return 0;
}
