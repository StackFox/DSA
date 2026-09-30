#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &nums, int k) {
  k %= nums.size();
  k = nums.size() - k;

  reverse(nums.begin(), nums.end());

  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6};

  rotateArray(nums, 2);
  
  cout << "nums: ";
  for (int i : nums)
    cout << i << " ";

  return 0;
}