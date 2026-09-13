#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, -2, 3, 4, 5};
    int sz = sizeof(arr) / sizeof(int);

    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < sz; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
        
    }
    cout << "Maximum subarray sum is: " << maxSum;

    return 0;
}