#include <iostream>
#include <vector>
using namespace std;

// Time Complexity - O(log(n))

int binarySearch(vector<int> &nums, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] < tar)
        {
            return binarySearch(nums, tar, mid + 1, end);
        }

        else if (nums[mid] > tar)
        {
            return binarySearch(nums, tar, st, mid - 1);
        }

        else if (nums[mid] == tar)
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {-1, 0, 2, 4, 6, 87};
    int st = 0;
    int end = arr.size() - 1;
    cout << binarySearch(arr, 87, st, end);
    return 0;
}