#include <iostream>
#include <vector>
using namespace std;

/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.*/

vector<int> pairSum(int target, vector<int> &nums)
{
    vector<int> ans;
    int sz = nums.size();
    int i = 0;
    int j = sz - 1;

    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
            j--;
        else if (pairSum < target)
            i++;
        else if (pairSum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main()
{

    vector<int> nums = {2, 5, 4, 5, 15};

    int target = 9;

    for (int i : pairSum(target, nums))
    {
        cout << i << " ";
    }

    return 0;
}