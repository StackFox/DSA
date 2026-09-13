#include <iostream>
using namespace std;

void pattern14(int n)
{
    
    for (int i = 0; i < 5; i++)
    {
        char letter = 65;
        for (int j = 0; j < i + 1; j++)
        {
            cout << letter;
            letter++;
        }
        cout << endl;
    }

}

int main()
{

    pattern14(5);

    return 0;
}