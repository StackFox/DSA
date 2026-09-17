#include <iostream>
#include <vector>
using namespace std;

void printRotatedArray(vector<int> &arr) {
  int n = arr.size() - 1;
  vector<int> temp;

  for (int i = 0; i <= n; i++) {
    temp.push_back(arr[i]);
  }

  for (int i : temp)
    cout << i << " ";

}

int main() {

  vector<int> arr = {1, 2, 3, 4, 5};
  printRotatedArray(arr);

  return 0;
}