// find the factorial of a number n
#include <iostream>
using namespace std;

long fact(int n)
{
    // int result = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     result *= i;
    // }
    // return result;

    // with recursion
    // minor checks
    // base case
    if (n < 0)
        return 0;
    if (n < 2)
        return 1;
    if (n == 2)
        return 2;
    return n*fact(n-1);
}

int main()
{
    long n;
    cin >> n;
    cout << fact(n);
    return 0;
}