#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(int target, vector<int> &vec)
{
    vector<int> nums;
    int sz = vec.size();
    for (int i = 0; i < sz; i++)
    {
        for (int j = (i + 1); j < sz; j++)
        {
            if ((vec[i] + vec[j]) == target)
            {
                nums.push_back(i);
                nums.push_back(j);
                return nums;
            }
        }
    }
    return nums;
}

int main()
{

    vector<int> vec = {2, 5, 4, 15};
    
    int target = 9;

    for (int i : pairSum(target, vec))
    {
        cout << i << " ";
    }

    return 0;
}