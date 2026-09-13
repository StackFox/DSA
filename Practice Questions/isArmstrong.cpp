#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int k = to_string(n).length(); // Get number of digits
    int og = n;
    int sum = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        sum += pow(last_digit, k);
        n /= 10;
    }
    return og == sum;
}

int main()
{

    cout << isArmstrong(153);

    return 0;
}