// #include <iostream>
// #include <vector>
// using namespace std;

// int partition(vector<int> &arr, int low, int high, bool isSmallest)
// {
//     int j = low; // pointer
//     int pivot = arr[high];

//     for (int i = low; i < high; i++)
//     {
//         if (isSmallest && arr[i] < pivot)
//         {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//         else if (!isSmallest && arr[i] > pivot)
//         {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }

//     swap(arr[j], arr[high]);
//     return j;
// }

// int quickSelect(vector<int> &arr, int low, int high, int k, bool isSmallest)
// {
//     // if there is exactly one element in arr
//     if (low == high)
//         return arr[low];

//     int partitionIdx = partition(arr, low, high, isSmallest); // 4

//     if (partitionIdx == k)
//         return arr[partitionIdx];

//     if (partitionIdx > k)
//         return quickSelect(arr, low, partitionIdx - 1, k, isSmallest);

//     return quickSelect(arr, partitionIdx + 1, high, k, isSmallest);
// }

// int findSecond(vector<int> &arr, bool isSmallest)
// {
//     int k = arr.size() - 2;
//     int low = 0, high = arr.size() - 1;

//     return quickSelect(arr, low, high, k, isSmallest);
// }

// int main()
// {
//     vector<int> nums = {3, 2, 1, 5, 6, 4};

//     cout << findSecond(nums, true);

//     return 0;
// }

/* =========================[ OPTIMAL APPROACH ]==========================================*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondSmallest(vector<int> &arr)
{
    if (arr.size() < 2)
        return -1;

    int small = INT_MAX, second_large = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < small)
        {
            second_large = small;
            small = arr[i];
        }
        else if (arr[i] < second_large && arr[i] != small)
        {
            second_large = arr[i];
        }
    }

    return second_large;
}

int secondLargest(vector<int> &arr)
{
    if (arr.size() < 2)
        return -1;

    int large = INT_MIN; 
    int second_large = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    return second_large;
}

int main()
{
    vector<int> nums = {1, 2, 4, 7, 6, 5};

    cout << secondLargest(nums) << " " << secondSmallest(nums);

    // Time Complexity: O(n)
    // Space Complexity: O(1)
    return 0;
}