#include <iostream>
using namespace std;

void pattern16(int n)
{
    char letter = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << letter;
        }
        letter++;
        cout << endl;
    }
}

int main()
{
    pattern16(4);
    return 0;
}