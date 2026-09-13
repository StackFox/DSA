#include <iostream>
using namespace std;

// find an element in an array

int findElement(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return (i);
        }
    }
    return -1; // NOT FOUND
}

int main()
{

    int arr[] = {1, 3, 5, 66};
    cout << "66 at index: " << findElement(arr, sizeof(arr), 66);

    return 0;
}