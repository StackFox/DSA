#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int person, int maxAllowedPages)
{
    int stud = 1, pages = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }

        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            stud++;
            pages = arr[i];
            if (stud > person)
            {
                return false;
            }
        }
    }
    return true;
}

int allocateBooks(vector<int> &nums, int person)
{
    if (person > nums.size())
    {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }

    int st = 0;
    int end = sum;
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(nums, person, mid))
        {
            ans = mid;
            end = mid - 1; // go left
        }
        else
        {
            st = mid + 1; // go right
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {15, 17, 20};
    int person = 2;

    cout << allocateBooks(arr, person) << endl;

    return 0;
}