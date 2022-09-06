#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char value = 'A';

        for (int j = 1; j <= i; j++)
        {
            cout << value;
            value++;
        }
        cout << endl;
    }

    /*
    Output -
    A
    AB
    ABC
    ABCD
    ABCDE
    */
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        char value = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << value;
            value++;
        }
        cout << endl;
    }

    /*
    Output -
    ABCDE
    ABCD
    ABC
    AB
    A
    */
    cout << endl;

    char value = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << value;
        }
        cout << endl;
        value++;
    }
    /*
    Output -
    A
    BB
    CCC
    DDDD
    EEEEE
    */
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        value = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << value << ' ';
            value++;
        }
        cout << endl;
    }
    /*
    Output -
    E
    D E
    C D E
    B C D E
    A B C D E
    */
}