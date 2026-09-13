// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n)
// {
//     // s0orting algorithm for an array
//     // int temp = INT_MIN;
//     for (int j = 0; j < n - 1; j++)
//     {
//         bool isSwap = false;
//         for (int j = 0; j < n - j - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 isSwap = true;
//             }
//         }
//         if (!isSwap)
//             return;
//     }
// }

// int main()
// {
//     int arr[] = {3, 4, 1, 6, 2, 0};
//     bubbleSort(arr, 6);
//     for (int j : arr)
//     {
//         cout << j << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            didSwap = 1;
        }

        if (didSwap == 0)
            break;
    }
}

int main()
{
    vector<int> arr = {2,0,2,1,1,0};
    bubbleSort(arr);

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}