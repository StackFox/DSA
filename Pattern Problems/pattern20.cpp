#include <iostream>
using namespace std;

void pattern20(int n){
    // upper part
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }

        for (int j = 2 * i + 1; j >= 1; j--)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        if (n >= 1)
            cout << endl;
    }

    // lower part
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << " ";
        }

        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {

    pattern20(4);

    return 0;
}