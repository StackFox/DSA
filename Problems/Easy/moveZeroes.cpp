#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums) {
  int left = 0;

  for (int i = 0; i < nums.size(); i++){
    if(nums[i] != 0){
        swap(nums[i], nums[left]);
        left++;
    }
  }
}

int main() {
  vector<int> nums = {0, 1, 4, 0, 5, 2};
  moveZeroes(nums);

  for (int i : nums)
    cout << i << " ";

  return 0;
}
