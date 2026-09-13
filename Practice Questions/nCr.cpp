#include <iostream>
using namespace std;

int factorialN(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int nCrBinomial(int n, int r)
{

    return factorialN(n) / (factorialN(r) * (factorialN(n - r)));
}

int main()
{
    cout << nCrBinomial(8, 2);
    return 0;
}