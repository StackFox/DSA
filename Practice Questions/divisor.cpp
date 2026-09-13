#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> printAllDivisors(int n)
{
    vector<int> res;
    // cout << sqrt(n) << endl; == 5.2915
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res.push_back(i);

            if (i*i != n)
            {
                res.push_back(n / i);
            }
        }
    }

    return res;
}

int main()
{
    vector<int> d = printAllDivisors(28);

    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}