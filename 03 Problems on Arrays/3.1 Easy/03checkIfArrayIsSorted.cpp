#include <iostream>
using namespace std;
// Time - O(N) Space - O(1)
bool isSorted(int *arr, int n)
{
    if (n <= 1)
    {
        return true;
    }

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;

        // if(arr[i] > arr[i+1]){
        //     return false;
        // }
    }
    return true;
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

    cout << (isSorted(arr, n) ? "Array is Sorted" : "Array is not sorted");

    delete []arr;
    return 0;
}