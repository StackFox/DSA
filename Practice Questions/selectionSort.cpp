#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int mini = arr[i];
        for (int j = i; j < n; j++)
        {
            if(arr[j] < mini){
                // find the minimum in the unsorted array
                int temp = arr[j];
                arr[j] = mini;
                mini = temp;
            }
        }
        cout << "mini: " << mini << endl;
        swap(mini, arr[i]);
    }
}

int main()
{
    int arr[] = {7, 5, 9, 2, 8};
    selectionSort(arr, 5);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}