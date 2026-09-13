#include <iostream>
using namespace std;

void print_name(int n)
{
    if (n == 0)
        return;

    cout << "Rakshit Sharma" << endl;
    print_name(n - 1);
}

int main()
{
    print_name(3);
    return 0;
}