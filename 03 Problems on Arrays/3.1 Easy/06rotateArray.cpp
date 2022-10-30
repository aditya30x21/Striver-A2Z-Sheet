#include <iostream>
using namespace std;

// Time - O(N) Space - O(1)

void reverse(int *arr, int s, int e)
{
    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
}

void leftRotateArray(int *arr, int n, int k)
{
    if (k >= n)
    {
        k %= n;
    }
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

void rightRotateArray(int *arr, int n, int k)
{
    if (k >= n)
    {
        k %= n;
    }
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    leftRotateArray(arr, n, k);
    printArray(arr,n);
    rightRotateArray(arr, n, k);
    printArray(arr,n);

    delete []arr;
    return 0;
}