#include <iostream>
#include <vector>
using namespace std;

// do linear search in vector

void searchV(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            cout << target << " Found at index: " << i << endl;
        }
    }
}

void reverseV(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    vector<int> vec = {1, 22, 34, 54, 21, 0};
    searchV(vec, 1);

    reverseV(vec);

    for (int i : vec)
    {
        cout << i << " ";
    }
    
    return 0;
}