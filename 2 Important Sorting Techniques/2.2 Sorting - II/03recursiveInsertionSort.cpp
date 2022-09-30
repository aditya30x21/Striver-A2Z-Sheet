#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    if (n == 0 or n == 1)
    {
        return;
    }

    insertionSort(arr, n - 1);

    int last = arr[n-1];
    int j = n-2;
    while(j>=0 and arr[j] > last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
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
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}