#include <iostream>
#include <vector>
using namespace std;

// Goal: Find the largest element in a given array

int findLargestOf(vector<int> &arr)
{
    int i = 0;
    int result;
    while (i < arr.size())
    {
        if (arr[i] > arr[i + 1])
            result = arr[i];
        i++;
    }
    return result;
}

int main()
{
    vector<int> arr = {1, 4, 2, 8};
    cout << findLargestOf(arr);


    return 0;
}