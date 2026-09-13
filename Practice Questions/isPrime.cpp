#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false; // 1 is not a prime number because it doesn't have two distinct divisors
    if (n == 2) return true;
    if (n % 2 == 0) return false; // All even whole numbers are non-prime except 2
    for (int i = 3; i*i <= n; i += 2) // Skip value
    {
        // cout << "[" << i << "] " << endl;
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (isPrime(i))
    //         cout << i << " ";
    // }
    // cout << endl;

    cout << isPrime(n);
    return 0;
}