#include <iostream>
#include <vector>
using namespace std;

void rankOf(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            // TODO: to be solved later using hash map
            j--;
        }
    }
    
}

int main()
{

    return 0;
}