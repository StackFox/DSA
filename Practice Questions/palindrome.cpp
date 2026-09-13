#include <iostream>
using namespace std;

string isPalindrome(int n)
{
    long int revNum = 0;
    int ogNum = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n/=10;
    }

    if( ogNum == revNum)
        return "Palindrome";
    return "Not Palindrome";
}

int main()
{
    cout << isPalindrome(3431);
    return 0;
}