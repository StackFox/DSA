#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int painter, int maxTime)
{
    int worker = 1, time = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxTime)
            return false;

        if (time + arr[i] <= maxTime)
        {
            time += arr[i];
        }
        else
        {
            worker++;
            time = arr[i];
            if (worker > painter)
                return false;
        }
    }
    return worker <= maxTime;
}

int allocatePainter(vector<int> &nums, int painter)
{
    if (painter > nums.size())
        return -1;

    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxVal = max(maxVal, nums[i]);
    }

    int st = 0, end = sum, ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isPossible(nums, painter, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            st = mid + 1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    cout << allocatePainter(arr, 2);
    return 0;
}