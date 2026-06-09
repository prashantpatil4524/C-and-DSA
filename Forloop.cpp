// programm to write n nos using for loop and even no with bitwise operator
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"The numbers are: ";
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"The even numbers are: ";
    for(int i=1; i<=n; i++){
        if(!(i & 1)){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}