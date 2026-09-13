#include <iostream>
#include <vector>
using namespace std;

int peakIndexof(vector<int> &nums)
{
    int st = 1;
    int end = nums.size() - 2;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
        {
            return mid;
        }

        else if (nums[mid - 1] < nums[mid]) // increasing
        {
            st = mid + 1;
        }

        else if (nums[mid] > nums[mid + 1]) // decreasing
        {
            end = mid - 1;
        }

        else
        {
            end = mid - 1; // default
        }
    }
    return -1;
}

int main()
{

    vector<int> A = {0, 4, 6, 12, 10, 5, 2};
    cout << peakIndexof(A);

    return 0;
}