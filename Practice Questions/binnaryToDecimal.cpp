#include <iostream>
using namespace std;

int binaryToDecimal(int binNum)
{
    int digit, pow = 1;
    int decNum = 0;
    while (binNum > 0)
    {
        digit = binNum % 10;
        binNum /= 10;

        decNum += digit * pow;
        pow *= 2;
    }
    return decNum;
}

int main()
{

    cout << binaryToDecimal(101);

    return 0;
}