#include <iostream>
#include <algorithm>
using namespace std;

void pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int bottom = (2*n-2)-i;
            int right = (2*n-2)-j;

            cout << max({top, left, right, bottom})-2;
        }
        cout << endl;
    }
}

int main()
{

    pattern22(4);

    return 0;
}