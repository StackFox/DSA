// find if a character is lowercase or uppercase
#include <iostream>
using namespace std;

void wordCase(char ch)
{
    if (ch >= 97 && ch <= 122)
    {
        cout << ch << " is lowercase" << endl;
    }

    else if (ch >= 65 && ch <= 90)
    {
        cout << ch << " is UPPERCASE" << endl;
    }
    
    else
    {
        cout << ch << " is not an alphabet" << endl;
    }
}

int main()
{
    char ch;
    cout << "enter a character ";
    cin >> ch;
    wordCase(ch);
    return 0;
}