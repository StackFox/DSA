#include <iostream>
#include <vector>
using namespace std;

vector<int> pOfArrExceptSelf(vector<int> &nums)
{
    // vector<int> prefix(nums.size(), 1);
    // vector<int> suffix(nums.size(), 1);
    vector<int> ans(nums.size(), 1);
    int suffix = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    for (int i = nums.size() - 2; i >= 0; i--)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     ans[i] *= (prefix[i] * suffix[i]);
    // }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    for (int x : pOfArrExceptSelf(arr))
        cout << x << " ";

    return 0;
}