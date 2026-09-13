#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int n1 = low;
    int n2 = mid + 1;

    // Merge two sorted subarrays
    while (n1 <= mid && n2 <= high)
    {
        if (arr[n1] <= arr[n2])
        {
            temp.push_back(arr[n1]);
            n1++;
        }
        else
        {
            temp.push_back(arr[n2]);
            n2++;
        }
    }

    // Copy remaining elements from left subarray
    while (n1 <= mid)
    {
        temp.push_back(arr[n1]);
        n1++;
    }

    // Copy remaining elements from right subarray
    while (n2 <= high)
    {
        temp.push_back(arr[n2]);
        n2++;
    }

    // Copy sorted elements back to original array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[low + i] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    // Sort left half
    mergeSort(arr, low, mid);
    // Sort right half
    mergeSort(arr, mid + 1, high);
    // Merge sorted halves
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    mergeSort(arr, 0, arr.size() - 1);

    // Print sorted array
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}