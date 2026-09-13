#include <iostream>
using namespace std;

int maxProfit(int arr[], int sz)
{
    int maxProfit = 0;
    int bestBuy = arr[0];
    
    for (int i = 1; i < sz; i++)
    {
        if (arr[i] > bestBuy)
        {
            maxProfit = max(maxProfit, arr[i] - bestBuy);
        }
        bestBuy = min(bestBuy, arr[i]);
    }

    return maxProfit;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(arr, 6);
    // maxProfit(arr, 6);

    return 0;
}