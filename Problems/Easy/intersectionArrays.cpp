// 349. find the intersection of two arrays
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    // unordered_map<int, int> freq;
    unordered_set<int> temp;
    unordered_set<int> ans;

    // insert unique elements from nums1 into temp
    for (int i : nums1)
    {
        temp.insert(i);
    }

    for(int i : nums2){
        if(temp.find(i) != temp.end()){
            ans.insert(i);
        }
    }

    vector<int> res(ans.begin(), ans.end());
    return res;
}

int main()
{
    vector<int> nums1 = {1, 1, 2};
    vector<int> nums2 = {1, 1, 1, 2};

    vector<int> ans = intersection(nums1, nums2);
    for (int i : ans)
        cout << i << " ";

    return 0;
}