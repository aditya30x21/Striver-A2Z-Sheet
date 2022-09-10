#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

// Time - O(N)
string armstrongNumber(int n)
{
    int sum = 0;
    int real = n;
    while (n != 0)
    {
        sum += cube(n % 10);
        n /= 10;
    }
    if (sum != real)
    {
        return "No";
    }
    return "Yes";
}

int main()
{
    int n;
    cin >> n;

    cout << armstrongNumber(n) << endl;
    return 0;
}