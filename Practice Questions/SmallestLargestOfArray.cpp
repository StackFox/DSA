#include <iostream>
using namespace std;

// find the smallest and the largest element in an array

int main()
{

    int arr[] = {23, 56, 2, 11, 88, 95};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int n = sizeof(arr) / sizeof(int);

    // for (int i = 0; i < n; i++)
    // {
    //     int temp = i;
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //     }
    //     if (arr[i] > largest)
    //     {
    //         largest = arr[i];
    //     }
    // }
    // cout << "smallest: " << smallest << endl
    //      << "largest: " << largest << endl;

    //          **** OR ****

    for (int i = 0; i < n; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout << "smallest: " << smallest << endl
         << "largest: " << largest;

    return 0;
}