#include <iostream>
using namespace std;

int reverseInt(int n)
{
    int newInt = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;

        newInt *= 10;
        newInt += rem;
    }
    return newInt;
}

int main()
{
    cout << reverseInt(24);
    return 0;
}