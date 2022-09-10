#include <iostream>
using namespace std;

// Time - O(N/2)

void reverseArray(int *arr, int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}

void reverseArrayAgain(int *arr, int start, int end)
{
    if (start >= end / 2)
    {
        return;
    }
    swap(arr[start], arr[end - start - 1]);
    reverseArrayAgain(arr, start + 1, end);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
    reverseArrayAgain(arr, 0, n);
    printArray(arr, n);
    return 0;
}