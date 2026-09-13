#include <iostream>
using namespace std;

void pattern12(int n)
{
    int spaces = 2 * (n - 1);
    for (int i = 0; i < n; i++)
    {

        // numbers
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        
        // spaces
        for (int j = spaces; j > 0; j--)
        {
            cout << " ";
        }

        // numbers
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j;
        }
        spaces = spaces - 2;
        cout << endl;
    }
}

int main()
{

    pattern12(4);

    return 0;
}