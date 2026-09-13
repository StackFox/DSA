#include <iostream>
using namespace std;

void pattern18(int n){
    for (int i = 0; i < n; i++){
        char startChar = ('A' + n - 1) - i;
        for (char j = startChar; j <= ('A' + n - 1); j++){
            cout << j;
        }
        cout << endl;
    }
}

int main() {

    pattern18(3);

    return 0;
}