#include <iostream>
using namespace std;

int sumOfFirstN(int n)
{
    // with formula
    // return n*(n+1)/2;

    // with recursion
    if (n == 1)
        return 1;

    return n + sumOfFirstN(n - 1);
}

int main()
{

    cout << sumOfFirstN(10);

    return 0;
}