#include <iostream>
#include <vector>
using namespace std;

int insertAt(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];  // 1
    int i = low, j = high; // i=0, j=3
    while (i < j)
    {
        // left part - find first element greater than the pivot
        while (i <= high -1 && arr[i] <= pivot)
            i++;
        // right part - find first element less than or equal to the pivot
        while (j >= low + 1 && arr[j] >= pivot)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    /*
    1. Pick a pivot
    2. make a temp arr and put the smaller elements to the left and larger to the right of the pivot
    3. repeat step 1 and 2 recursively
    */

    if (low < high)
    {
        int partitionIdx = insertAt(arr, low, high);

        quickSort(arr, low, partitionIdx - 1);
        quickSort(arr, partitionIdx + 1, high);
    }
}

int main()
{
    vector<int> arr = {1, 4, 2, 8};
    quickSort(arr, 0, arr.size() - 1);

    for (int i : arr)
        cout << i << " ";

    return 0;
}