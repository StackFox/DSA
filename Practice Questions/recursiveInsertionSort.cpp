#include <iostream>
using namespace std;

void recursiveInsertionSort(int arr[], int n, int i)
{
    if (i == n)
        return;

    int j = i;

    while(j > 0 && arr[j-1] > arr[j]){
        swap(arr[j-1], arr[j]);
        j--;
    }

    recursiveInsertionSort(arr, n, i+1);
}

int main()
{
    int arr[] = {2, 5, 231, 3, 4, 33, 77};

    recursiveInsertionSort(arr, 7, 0);

    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}