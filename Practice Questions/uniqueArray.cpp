#include <iostream>
using namespace std;

// Print all unique elements in the array (appear only once)
void printUniques(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        int count = 0;
        for (int j = 0; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 1, 2, 4, 55, 3, 3, 2};
    int sz = sizeof(arr) / sizeof(int);
    cout << "Unique elements: ";
    printUniques(arr, sz);
    cout << endl;
    return 0;
}