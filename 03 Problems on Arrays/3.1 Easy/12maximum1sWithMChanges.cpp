/*
Input:
N = 11
arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1}
M = 2
Output: 8
*/

#include <iostream>
using namespace std;

// Time - O(N^2) Space - O(N)
int findZeroesBruteF(int *arr, int n, int m)
{
    int count = 0;
    int ans = 0;
    int tempM = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                count++;
            }
            else if (arr[j] == 0 and tempM > 0)
            {
                count++;
                tempM--;
            }
            else if (arr[j] == 0 and tempM == 0)
            {
                break;
            }
        }
        tempM = m;
        ans = max(count, ans);
        count = 0;
    }
    return ans;
}

// Time - O(N*M) Space - O(1)
int findZeroesOptimal(int *arr, int n, int m)
{
    int left = 0;
    int right = 0;
    int zeroCount = 0;
    int ans = 0;
    while (right < n)
    {
        if (arr[right] == 0)
        {
            zeroCount++;
        }
        while (zeroCount > m)
        {
            if (arr[left] == 0)
            {
                zeroCount--;
            }
            left++;
        }

        ans = max(ans, right - left + 1);
        right++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;

    cout << findZeroesBruteF(arr, n, m) << endl;
    cout << findZeroesOptimal(arr, n, m) << endl;

    return 0;
}