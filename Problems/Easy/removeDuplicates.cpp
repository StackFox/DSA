// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// int removeDuplicates(vector<int> &nums)
// {
// unordered_set<int> temp;
// int i = 0;
// for (int num: nums)
// {
//     if(temp.find(num) == temp.end()){
//         temp.insert(num);
//         nums[i] = num;
//         i++;
//     }
// }
// return i;
// }

// int main()
// {
//     vector<int> nums = {1, 1, 2, 2, 2, 3, 3};

//     removeDuplicates(nums);
//     for(int i: nums)
//         cout << i << " ";

//     return 0;
// }

/* ====================================== { OPTIMIZED APPROACH } ==========================*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 1)
        return 0;

    int j = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    return j+1;
    
}

int main()
{

    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};

    removeDuplicates(nums);
    for (int i : nums)
        cout << i << " ";

    return 0;
}