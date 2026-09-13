#include <iostream>
#include <vector>
using namespace std;

/* given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space. */

int singleNonDuplicate(vector<int> &nums)
{
    int st = 0;
    int end = nums.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums.size() == 1)
            return nums[0];
        if (nums[0] != nums[1])
            return nums[0];
        if (nums.back() != nums[nums.size() - 2])
            return nums.back();

        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        else if (mid % 2 == 0) // even
        {
            if (nums[mid] == nums[mid - 1]) // left
                end = mid - 1;
            else // right
                st = mid + 1;
        }

        else // odd
        {
            if (nums[mid] == nums[mid - 1]) // left
                st = mid + 1;
            else // right
                end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    vector<int> arr2 = {3, 3, 7, 7, 10, 11, 11};
    cout << singleNonDuplicate(arr2);

    return 0;
}