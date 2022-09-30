#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Time - O(N logN)
// Space - O(1)

void merge(int arr[], int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int f = l;

    int temp[100000];

    while (i <= m and j <= r)
    {
        if (arr[i] < arr[j])
        {
            temp[f] = arr[i];
            i++;
        }
        else
        {
            temp[f] = arr[j];
            j++;
        }
        f++;
    }

    while (i <= m)
    {
        temp[f] = arr[i];
        i++;
        f++;
    }

    while (j <= r)
    {
        temp[f] = arr[j];
        j++;
        f++;
    }

    for (int f = l; f <= r; f++)
    {
        arr[f] = temp[f];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
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

    mergeSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}