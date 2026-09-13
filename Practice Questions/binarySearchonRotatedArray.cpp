#include <iostream>
#include <vector>
using namespace std;

int bsOnRotatedSortedArr(vector<int> &nums, int tar)
{
    int st = 0;
    int end = nums.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == tar)
        {
            return mid;
        }

        if (nums[st] <= nums[mid]) // left half sorted
        {
            if (nums[st] <= tar && tar <= nums[mid])
                end = mid - 1;

            else
                st = mid + 1;
        }

        else // right half sorted
        {
            if (nums[mid] <= tar && tar <= nums[end])
                st = mid + 1;

            else
                end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {5, 1, 3};
    cout << bsOnRotatedSortedArr(arr, 0);
    return 0;
}