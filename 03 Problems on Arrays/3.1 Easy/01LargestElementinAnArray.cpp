
#include <iostream>
#include <algorithm>
using namespace std;

int largestInArrayApproach1(int *arr, int n)
{
    /*
    Sort the array using inbuilt sort function and return arr[n-1]
    Time - O(NlogN)
    Space - O(1)
    */
    // Approach 1
    sort(arr, arr + n);
    return arr[n - 1];
}

int largestInArrayApproach2(int *arr, int n)
{
    /*
    Keep an max element set to INT_MIN and update it after every iteration.
    Time - O(n)
    Space - O(n)
    */
    // Approach 2
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
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

    cout << largestInArrayApproach2(arr, n);

    delete[] arr;

    return 0;
}
