#include <iostream>
using namespace std;

// Time - O(N), Space - O(1)
int removeDuplicates(int *arr, int n)
{
    int i = 0;
    int j = 1;
    while (j < n)
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            arr[i + 1] = arr[j];
            i++;
            j++;
        }
    }
    return i + 1;
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

    int ans = removeDuplicates(arr, n);

    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}