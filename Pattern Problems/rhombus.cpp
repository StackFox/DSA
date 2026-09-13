#include <iostream>
using namespace std;

void pattern9(int n)
{
    // upper part
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // lower part
    for (int i = n - 1; i >= 0; i--)
    {
        // spaces
        for (int j = n - i - 2; j >= 0; j--)
        {
            cout << " ";
        }

        for (int j = 2 * i + 1; j >= 1; j--)
        {
            cout << "*";
        }

        // spaces
        for (int j = n - i - 2; j >= 0; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    pattern9(3);
    return 0;
}