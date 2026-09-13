#include <iostream>
using namespace std;

void pattern10(int n){
    // upper part
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout<< endl;
    }

    // lower part
    for(int i = n-1; i > 0; i--){
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {

    pattern10(3);

    return 0;
}