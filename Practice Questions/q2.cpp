// sum of numbers from 1 to n divisible by 3
#include <iostream>
using namespace std;

void printSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) // start from 1
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << sum;
}

int main()
{
    int n = 23;
    printSum(n);
    return 0;
}