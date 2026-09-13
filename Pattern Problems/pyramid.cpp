#include <iostream>
using namespace std;

void pattern7(int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n-i-1; j++){
            cout << " ";
        }
        for(int j = 1; j<= 2*i+1; j++){
            cout << "*";
        }
        for(int j = 1; j <= n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main() {

    pattern7(4);

    return 0;
}