#include <iostream>
#include <vector>
using namespace std;

// Given an integer array nums and an integer k, return the kth largest element in the array.

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high]; // last element
    int p = low;
    for (int i = low; i < high; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[p]);
            p++;
        }
    }
    swap(arr[p], arr[high]);
    return p;
}

int quickSelect(vector<int> &nums, int low, int high, int k)
{
    if (low == high)
        return nums[low];

    int partitionIdx = partition(nums, low, high);

    if (partitionIdx == k)
        return nums[partitionIdx];

    if (partitionIdx > k)
        return quickSelect(nums, low, partitionIdx - 1, k);

    return quickSelect(nums, partitionIdx + 1, high, k);
}

int findKthLargest(vector<int> &nums, int k)
{
    k = nums.size() - k;
    int low = 0, high = nums.size() - 1;

    return quickSelect(nums, low, high, k);
}

int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    cout << findKthLargest(nums, k);

    return 0;
}