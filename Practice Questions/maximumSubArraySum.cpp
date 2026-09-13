#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr) / sizeof(int);

    int maxSum = INT_MIN;

    for (int start = 0; start < sz; start++)
    {
        int currSum = 0;
        for (int end = start; end < sz; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
        // cout << endl;
    }
    cout << "Maximum subarray sum is: " << maxSum;

    return 0;
}