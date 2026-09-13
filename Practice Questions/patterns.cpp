#include <iostream>
using namespace std;

int main()
{
    // int n = 1;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 1; j <= 3; j++)
    //     {
    //         cout << n++;
    //     }
    //     cout << endl;
    // }

    // string str = "*";
    // for (int i = 1; i < 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         string result = "";
    //         result += str;
    //         cout<< result;
    //     }
    //     cout<< endl;
    // }

    // for (int i = 1; i < 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         // string res = "";
    //         // res += to-string(i);
    //         cout<< i;
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     char alpha = 'A' + (i - 1);
    //     for (int j = 0; j <= i; j++)
    //     {
    //         string res = "";
    //         res += alpha;
    //         cout << res;
    //         alpha++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < (4 - i - 1); j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= (i + 1); j++)
    //     {
    //         cout << (j);
    //     }

    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < (3 - i); j++)
    //     {
    //         cout << " ";
    //     }

    //     cout << "*";

    //     for (int j = 0; j < ((2 * i) - 1); j++)
    //     {
    //         cout<<" ";
    //     }

    //     if (i != 0)
    //     {
    //         cout<<"*";
    //     }
        

    //     cout << endl;
    // }
    
    
    
    // for (int i = 2; i >= 0; i--)
    // {
    //     for (int j = 0; j < (3 - i); j++)
    //     {
    //         cout << " ";
    //     }

    //     cout << "*";

    //     for (int j = 0; j < ((2 * i) - 1); j++)
    //     {
    //         cout<<" ";
    //     }

    //     if (i != 0)
    //     {
    //         cout<<"*";
    //     }
        

    //     cout << endl;
    // }



    // Butterfly Pattern
    for (int i = 0; i < 4; i++)
    {
        // stars
        for (int j = 0; j < i+1; j++) 
        {
            cout<<"*";
        }
        
        // spaces
        for (int j = 0; j < 3-i; j++)
        {
            cout<<" ";
        }
        // spaces
        for (int j = 3-i; j > 0; j--)
        {
            cout<<" ";
        }
        
        // stars
        for (int j = i+1; j > 0; j--) 
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
    for (int i = 4; i > 0; i--)
    {
        // stars
        for (int j = 0; j < i; j++) 
        {
            cout<<"*";
        }
        
        // spaces
        for (int j = 0; j < 4-i; j++)
        {
            cout<<" ";
        }
        // spaces
        for (int j = 4-i; j > 0; j--)
        {
            cout<<" ";
        }
        
        // stars
        for (int j = i; j > 0; j--) 
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
    
    return 0;
}