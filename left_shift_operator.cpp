// right shift bitwise operator with while loop to count down the number by right shifting it until it becomes 0

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int count = 0;
//     while (n > 0) {
//         n = n >> 1; // Right shift the number by 1
//         count++; // Increment the count of shifts
//     }

//     cout << "Number of right shifts until n becomes 0: " << count << endl;

//     return 0;
// }

// write the no of setbits in a number using right shift operator and while loop
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    while (n > 0) {
        if (n & 1) { // Check if the least significant bit is set
            count++; // Increment the count of set bits
        }
        n = n >> 1; // Right shift the number by 1
    }

    cout << "Number of set bits in the number: " << count << endl;

    return 0;
}