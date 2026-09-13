#include <iostream>
#include <vector>
using namespace std;

void recursiveBubbleSort(int arr[], int n)
{
    if (n == 1)
        return;

    bool didSwap = false;

    for (int i = 0; i <= n - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            didSwap = true;
        }
    }

    if (didSwap)
        return;

    recursiveBubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {1, 4, 2, 8};

    recursiveBubbleSort(arr, 4);

    for (int i : arr)
        cout << i << " ";

    return 0;
}