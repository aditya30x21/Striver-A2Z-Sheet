#include <iostream>
#include <cmath>
using namespace std;

// Time - O(n)
void printAllFactorBruteForce(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

//  Time - O(sqrt(n))
void printAllFactor(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;

    printAllFactor(n);
    return 0;
}