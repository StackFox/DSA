#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
  unordered_set<int> temp;
  unordered_map<int, int> freq;
  vector<int> ans;

  for (int x : nums1) {
    freq[x]++;
  }

  for (auto i : nums2) {
    if (freq.find(i) != freq.end()) {
      auto frequency = freq.find(i);
      if (frequency->second > 0) {
        ans.push_back(frequency->first);
        freq[i]--;
      }
    }
  }

  return ans;
}

int main() {
  vector<int> arr1 = {1, 2, 2, 1};
  vector<int> arr2 = {2, 2};

  vector<int> res = intersect(arr1, arr2);
  // intersect(arr1, arr2);
  for (int i : res) {
    cout << i << " ";
  }

  return 0;
}