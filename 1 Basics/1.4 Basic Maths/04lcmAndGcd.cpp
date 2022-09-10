#include <iostream>
#include <algorithm>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    /*
    Time - O(n)
    long long int gcd;
    for (int i = 1; i <=min(a, b); i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
    */

    // Time - O(log(min(a,b)))
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a%b);
}

long long int lcm(long long int a, long long int b)
{
    long long int lcm = (a*b)/gcd(a,b);
    return lcm;
}

int main()
{
    long long int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << " ";
    cout << lcm(a, b) << " ";
    return 0;
}