#include <iostream>
using namespace std;

void pattern8(int n){
    for(int i = n-1; i >= 0; i--){
        // space
        for(int j = n-i-2; j >= 0; j--){
            cout << " ";
        }
        // star
        for(int j = 2*i+1; j >= 1; j--){
            cout << "*";
        }
        // space
        for(int j = n-i-2; j >= 0; j--){
            cout << " ";
        }
        cout << endl;
    }
}

int main() {

    pattern8(5);

    return 0;
}