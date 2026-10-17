#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> freq;
    int ans;

    for (int i : nums)
        freq[i]++;

    auto it = freq.begin();
    while (it != freq.end())
    {
        if (it->second > n / 2)
        {
            ans = it->first;
        }
        ++it;
    }

    return ans;
}

// using boyne-moore algo: O(1) space
int majorityElement(vector<int> &nums)
{
    int ans = nums[0];
    int count = 0;

    for (int i : nums)
    {
        if (i == ans)
            count++;
        else
        {
            if (count > 0)
                count--;
            else
            {
                ans = i;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    cout << majorityElement(nums);
    return 0;
}