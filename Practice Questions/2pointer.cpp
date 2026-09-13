#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 32, 4, 45, 6};
    int sz = sizeof(arr) / sizeof(int) - 1;
    int start = 0;
    int end = sz;

    while (start < end)
    {
        int temp = arr[start]; // this is to prevent the overwriting of elements
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    //     *** OR ***
    
    // while (start != end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    

    for (int i = 0; i <= sz; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}