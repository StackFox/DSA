#include <iostream>
#include <math.h>
using namespace std;

void count_digits(int n)
{
    int reversed_num = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversed_num = reversed_num * 10 + digit;
        n /= 10;
    }
    cout << reversed_num;
}

int main()
{
    count_digits(5453);
    return 0;
}