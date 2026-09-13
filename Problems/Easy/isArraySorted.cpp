// #include <iostream>
// #include <vector>
// using namespace std;

// /* Problem Statement: Given an array of size n, write a program to check
// if the given array is sorted in (ascending / Increasing / Non-decreasing)
// order or not. If the array is sorted then return True, Else return False. */

// // sorted - ascending or descending
// bool isSorted(vector<int> &arr)
// {
//     int n = arr.size() - 1;
//     bool sorted = false;
//     for (int i = 0; i < n; i++)
//     {
//         // check ascending
//         if (arr[0] < arr[n])
//         {
//             if (arr[i + 1] >= arr[i])
//                 sorted = true;
//             else
//                 sorted = false;
//         }
//         // check descending
//         else if (arr[0] > arr[n])
//         {
//             if (arr[i + 1] <= arr[i])
//                 sorted = true;
//             else
//                 sorted = false;
//         }
//     }
//     return sorted;
// }

// int main()
// {
//     vector<int> arr = {3, 2, 1, 5, 6, 4};
//     vector<int> arr2 = {1, 2, 3, 4, 5};
//     vector<int> arr3 = {1, 1, 2, 3, 3, 4, 5};

//     // time complexity -> O(n)
//     // space complexity -> O(1) = constant as we didn't use any temp array
//     cout << isSorted(arr3);

//     // 0 - false
//     // 1 - true
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

// Striver's Approach (Brute Force)

// bool isSorted(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[j] < arr[i])
//                 return false;
//         }
//     }
//     return true;
// }



// Striver's Approach (Brute Force)

bool isSorted(vector<int> &arr){
    if(arr.size() == 0 || arr.size() == 1)
        return true;
    
    for (int i = 1; i < arr.size(); i++){
        if(arr[i-1] > arr[i])
            return false;
    }

    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    printf("%s", isSorted(arr) ? "True" : "False");

    return 0;
}