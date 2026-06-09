//take three no and tell which one is big and which one is small
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    int big = a; // Assume a is the biggest
    if (b > big) {
        big = b; // Update big if b is bigger
    }
    if (c > big) {
        big = c; // Update big if c is bigger
    }

    int small = a; // Assume a is the smallest
    if (b < small) {
        small = b; // Update small if b is smaller
    }
    if (c < small) {
        small = c; // Update small if c is smaller
    }

    cout << "The biggest number is: " << big << endl;
    cout << "The smallest number is: " << small << endl;

    return 0;
}