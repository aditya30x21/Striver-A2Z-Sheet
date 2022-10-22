#include <iostream>
using namespace std;

bool isSorted(int *nums, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] < nums[i])
        {
            return false;
        }
    }
    return true;
}

void reverse(int *nums, int start, int end)
{
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotate(int *nums, int k, int n)
{
    if (k < n)
    {
        reverse(nums, 0, n - 1);
        reverse(nums, 0, n - k - 1);
        reverse(nums, n - k, n - 1);
    }
}

bool check(int *arr, int n)
{
    bool sort = false;
    for (int i = 0; i < n; i++)
    {
        if (isSorted(arr, n))
        {
            sort = true;
            break;
        }
        else
        {
            rotate(arr, 1, n);
        }
    }
    return sort;
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

    cout << (check(arr, n) ? "Array is Sorted" : "Array is not sorted");

    delete[] arr;
    return 0;
}