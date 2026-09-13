#include <iostream>
#include <vector>
using namespace std;

int findLucky(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int freq = 1;
        int n = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] == arr[i])
            {
                freq++;
            }
        }
        if (freq == n)
        {
            return n;
        }
    }
    return -1;
}

int main()
{

    vector<int> arr = {1, 2, 2, 3, 3, 3};
    cout << findLucky(arr);

    return 0;
}