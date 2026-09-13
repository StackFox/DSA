#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j)
    {
        // find the first element greater than the pivot
        while (arr[i] <= pivot && i <= high - 1)
            i++;

        // find the first element smaller than the pivot
        while (arr[j] > pivot && j >= low + 1)
            j--;

        // swap the two numbers
        if (i < j)
            swap(arr[low], arr[j]);
    }
    swap(arr[low], arr[j]);

    return j;
}

void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partitionIdx = partition(arr, low, high);
        quick_sort(arr, low, partitionIdx - 1);
        quick_sort(arr, partitionIdx + 1, high);
    }
}

void print_arr(vector<int> arr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    quick_sort(arr, 0, arr.size() - 1);
    print_arr(arr, arr.size() - 1);

    return 0;
}