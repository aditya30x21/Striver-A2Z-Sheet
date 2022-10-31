#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int *arr, int n)
{
    int count = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            maxi = max(count, maxi);
            count = 0;
        }
    }
    maxi = max(count, maxi);
    return maxi;
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
    cout << findMaxConsecutiveOnes(arr, n);
    delete[] arr;
    return 0;
}