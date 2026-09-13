// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void insertionSort(int arr[], int n) // O(n^2)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int curr = arr[i];
//         int prev = i-1;

//         while (prev >= 0 && arr[prev] > curr)
//         {
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//         arr[prev+1] = curr;
//     }

// }

// int main()
// {

//     int n = 5;
//     int arr[] = {4, 1, 5, 2, 3};

//     insertionSort(arr, n);
//     printArray(arr, n);

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main()
{
    vector<int> arr = {2, 5, 231, 3, 4, 33, 77};

    insertionSort(arr);
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}