#include <iostream>
using namespace std;

// reverse a given array and print it
void reverseArr(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 3, 5, 66};
    reverseArr(arr, 4);
    return 0;
}