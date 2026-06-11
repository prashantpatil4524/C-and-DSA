// in sert any 7 int to the vectors
#include <iostream>
#include <vector>

using namespace std;
int main (){
    vector<int> v(7);
    cout << "Enter 7 integers: ";
    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }   
    cout << "The integers you entered are: ";
    for (int i = 0; i < 7; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
    
}