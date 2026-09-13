#include <iostream>
using namespace std;

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {

        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }

        // characters
        char ch = 65;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (j <= (2 * i + 1) / 2)
            {
                cout << ch;
                ch++;
            }
            else
            {
                cout << ch;
                ch--;
            }
        }

        // space
        // for (int j = 1; j <= n - i - 1; j++)
        // {
        //     cout << " ";
        // }
        cout << endl;
    }
}

int main()
{

    pattern17(4);

    return 0;
}