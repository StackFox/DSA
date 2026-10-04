// #include <iostream>
// #include <vector>
// #include <numeric>
// using namespace std;

// int missingNumber(vector<int> &nums) {
//   int sum = accumulate(nums.begin(), nums.end(), 0);
//   int n = nums.size();
//   int s = (n * (n + 1)) / 2;

//   return s - sum;
// }

// int main() {
//     vector<int> arr = {1, 0, 6, 2, 3, 4};
//     cout << missingNumber(arr);
//     return 0;
// }

// Using O(n) time complexity with XOR Logic

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums) {
  int res = nums.size();
  for (int i = 0; i < nums.size(); i++) {
    res ^= i;
    res ^= nums[i];
  }
  return res;
}

int main() {
  vector<int> arr = {1, 0, 6, 2, 3, 4};
  cout << missingNumber(arr);

  return 0;
}