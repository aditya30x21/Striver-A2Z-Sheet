#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    /*
    Output -
    *****
    *****
    *****
    *****
    *****
    
    */

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    /*
    Output -
    *
    **
    ***
    ****
    *****

    */

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    /*
    Output -
    1
    12
    123
    1234
    12345
    */

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }

    /*
    Output -
    1
    22
    333
    4444
    55555
    */

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    /*
    Output -
    *****
    ****
    ***
    **
    *

    */

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (j < n - i)
        {
            cout << j + 1;
            j++;
        }
        cout << endl;
    }

    /*
    Output -
    12345
    1234
    123
    12
    1
    All output for n = 5.
    */
}
