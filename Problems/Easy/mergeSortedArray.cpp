#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2) {
  set<int>temp;

  for (int x : nums1)
    temp.insert(x);

  for (int x : nums2)
    temp.insert(x);

  vector<int> res(temp.begin(), temp.end());
  return res;
}

int main() {
  vector<int> arr1 = {1, 2, 3, 4, 5};
  vector<int> arr2 = {1, 2, 7};

  vector<int> res = unionArray(arr1, arr2);

  for (int i : res) {
    cout << i << " ";
  }

  return 0;
}