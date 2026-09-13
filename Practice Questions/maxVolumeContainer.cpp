#include <iostream>
#include <vector>
using namespace std;

int maxVolumeContainer(vector<int> &heights)
{
    int i = 0;
    int j = heights.size() - 1;
    int maxWater = INT_MIN;
    int minHeight;

    while (i < j)
    {
        minHeight = min(heights[i], heights[j]);
        maxWater = max(maxWater, minHeight * (j - i));
        if (minHeight == heights[i])
        {
            i++;
        }
        else if (minHeight == heights[j])
        {
            j--;
        }
    }
    return maxWater;
}

int main()
{
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxVolumeContainer(arr);
    return 0;
}