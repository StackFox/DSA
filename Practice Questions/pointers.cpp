#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *ptr1 = &a;
    cout << ptr1 << endl;

    // NULL pointer
    int **ptr2 = NULL;
    cout << ptr2 << endl; // cannot be dereferenced

    // array pointers
    int arr[] = {1, 2, 4, 5, 6};
    cout << arr << endl; // constant pointer

    // pointer arithmetics
    cout << ptr1 << endl;
    ptr1++;
    cout << ptr1 << endl;
    
    return 0;
}