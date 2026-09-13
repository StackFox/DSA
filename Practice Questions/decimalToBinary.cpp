#include <iostream>
#include <cmath>
using namespace std;

int decToBinary(int decNum)
{
    int result = 0;
    int i = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        result += rem * i;
        i *= 10;
    }

    return result;
}

int main()
{

    cout << decToBinary(5);

    return 0;
}