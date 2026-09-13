#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int digit, sum = 0;
    int cp = n;
    while (cp > 0)
    {
        digit = cp % 10;
        sum += digit;
        cp /= 10;
    }
    return sum;
}

int main()
{

    cout << sumOfDigits(1234);

    return 0;
}