#include <iostream>
using namespace std;

void pattern15(int n)
{
    for (int i = n; i >= 0; i--)
    {
        char letter = 65;
        for (int j = i; j >= 0; j--)
        {
            cout << letter;
            letter++;
        }
        cout << endl;
    }
}

int main()
{

    pattern15(4);

    return 0;
}