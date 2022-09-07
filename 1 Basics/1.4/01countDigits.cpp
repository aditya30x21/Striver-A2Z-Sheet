#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n)
{
    /*
    // O(n)
    int count = 0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
    */

    /*
    // O(1)
    string count = to_string(n);
    return count.length();
    */

    // O(1)
    int digits = floor(log10(n) + 1);
    return digits;
}

int main()
{
    int n;
    cin >> n;

    cout << countDigits(n) << endl;

    return 0;
}