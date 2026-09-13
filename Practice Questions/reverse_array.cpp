#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse_array(vector<int> &arr)
{
    // int start = 0, end = arr.size() - 1;
    // while (start < end)
    // {
    //     // swap the extreme ends
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    // built-in method
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 2, 99, 100};
    reverse_array(arr);
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}