#include <iostream>
using namespace std;

int fibonacciOf(int n)
{
    // int a = 0, b = 1;
    // cout << "The Fibonacci Series up to " << n << "th term:" << endl;
    // for (int i = 2; i <= n; i++)
    // {
    //     cout << a << " " << b << " ";
    //     int next = a + b;
    //     a = b;
    //     b = next;
    // }
    // return a;

    // Base case: if n is 0 or 1, return n itself
    if (n <= 1)
    {
        return n;
    }

    // Recursive case: sum of (n-1)th and (n-2)th Fibonacci numbers
    return fibonacciOf(n - 1) + fibonacciOf(n - 2);
}

int main()
{
    cout << fibonacciOf(4);
    return 0;
}