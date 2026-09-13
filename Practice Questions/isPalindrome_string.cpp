#include <iostream>
using namespace std;

bool isPalindrome(string s, int i)
{
    // brute force approach
    //  for (int i = 0; i < str.length(); i++)
    //  {
    //      if (str[i] != str[str.length() - i - 1])
    //          return false;
    //  }
    //  return true;

    // optimal approach
    // base case
    // and the string is a palindrome, return true.
    if (i >= s.length() / 2)
        return true;

    // If the start and end characters are not equal, it's not a palindrome.
    if (s[i] != s[s.length() - i - 1])
        return false;

    return isPalindrome(s, i + 1);
}

int main()
{
    cout << isPalindrome("madam", 0);
    return 0;
}