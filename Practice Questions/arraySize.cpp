#include <iostream>
using namespace std;

// how to calculate the no of elemnts in an array?

int sizeOf(int arr[], int size){
    return size / sizeof(int);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    // cout << "size: " << sizeof(arr) / sizeof(int);
    cout << "size: " << sizeOf(arr, sizeof(arr));

    return 0;
}