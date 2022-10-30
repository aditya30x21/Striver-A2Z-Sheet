#include <iostream>
#include <algorithm>
using namespace std;

// Time - O(N) Space - O(1)
int missingNumber(int *nums, int n)
{
    int sum = n * (n + 1) / 2;
    // cout<<sum;
    for (int i = 0; i < n; i++)
    {
        sum -= nums[i];
    }
    return sum;
}

/*
// Time - O(NLogN) Space - O(1)
int missingNumber(int *nums,int n)
{
    sort(nums, nums + n);
    int i;
    for (i = 0; i < n; i++)
    {
        if (i != nums[i])
        {
            break;
        }
    }
    return i;
}
*/
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << missingNumber(arr, n);

    return 0;
}