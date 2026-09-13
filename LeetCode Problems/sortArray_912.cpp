#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[high];
    int p = low;
    
    for (int i = low; i < high; i++)
    {
        if (nums[i] < pivot)
        {
            swap(nums[i], nums[p]);
            p++;
        }
    }
    swap(nums[p], nums[high]);
    return p;
}

void sortArray(vector<int> &nums, int low, int high)
{
    // using quick sort
    if (low >= high) // base case
    return;
    
    int partitionIdx = partition(nums, low, high);
    
    sortArray(nums, low, partitionIdx -1);
    sortArray(nums, partitionIdx + 1, high);
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    sortArray(arr, 0, arr.size() - 1);

    for (int i : arr)
        cout << i << " ";

    return 0;
}