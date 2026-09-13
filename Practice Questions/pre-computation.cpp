#include <iostream>
#include <map>
using namespace std;

int findOccurenceOf(int n, int arr[], int size)
{
    // NUMBER HASHING

    // int hash[13] = {0};
    // for (int i = 0; i < size; i++)
    // {
    //     hash[arr[i]] += 1; // increment the frequency of each number from 0 to 12
    // }

    // return hash[n];

    // CHARACTER HASHING
    // A = 65, Z = 90, a = 97, z = 122

    // int hash[26] = {0}; // used when you're sure that the arr consists of lowercase letters only
    // int hash[256] = {0}; // used when you're not sure that the arr consists of lowercase letters only
    // for (int i = 0; i < size; i++)
    // {
    //     hash[arr[i]]++;
    // }
    // return hash[ch];

    // HASHING USING MAP
    // map <number, frequency>

    map<int, int> hash;
    // initialize the array
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]] = 0;
    }
 
    for(auto it : hash){
        cout << it.first << " => " << it.second << endl;
    }
    
    // counting the frequency
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    } 
    
    for(auto it : hash){
        cout << it.first << " => " << it.second << endl;
    }
    
    return hash[n];
}

int main()
{

    // char arr[] = "lcaNaeHafyf";
    int arr[] = {4, 3, 6, 2, 1, 2, 3, 4};
    cout << findOccurenceOf(1, arr, 8);

    return 0;
}