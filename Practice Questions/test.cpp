#include <iostream>
#include <vector>
using namespace std;

void printAllSubArrays(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            int sum = 0;
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {2, 5, 231, 3, 4, 33, 77};
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            cout << j << " ";
        }
    }

    return 0;
}