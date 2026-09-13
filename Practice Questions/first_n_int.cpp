#include <iostream>
using namespace std;

void print_1_to_N(int current, int N)
{
    if (current > N)
        return;
    
    cout << current << " ";
    print_1_to_N(current+1, N);
}

int main()
{

    print_1_to_N(1, 64);

    return 0;
}