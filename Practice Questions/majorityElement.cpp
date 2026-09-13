#include <iostream>
#include <vector>
using namespace std;

/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for (int val : nums) {
            int count = 0;
            for (int el : nums) {
                if (el == val) {
                    count++;
                }
            }
            if (count > n / 2) {
                return val;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    Solution sol;
    cout << sol.majorityElement(nums) << endl;
    return 0;
}