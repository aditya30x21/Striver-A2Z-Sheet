#include <iostream>
using namespace std;

// Time - O(logn)
long long int reverse(int X)
{
    long long int Y = 0;
    while (X > 0)
    {
        // Extract the last digit
        int digit = X % 10;
        // Appending last digit
        Y = Y * 10 + digit;
        // Shrinking X by discarding the last digit
        X = X / 10;
    }
    return Y;
}
bool isPalindrome(int x)
{
    int dummy = reverse(x);

    return dummy == x;
}
int main()
{
    int n;
    cin >> n;

    string ans = isPalindrome(n) ? "YES" : "NO";
    cout << ans;
    return 0;
}