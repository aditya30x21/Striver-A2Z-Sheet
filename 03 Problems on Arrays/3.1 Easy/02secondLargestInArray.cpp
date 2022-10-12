#include <iostream>
using namespace std;
/*
# Approach 1:
Sort the array and return the arr[n-2]
Time - O(N*LogN)
Space - O(N)
*/

// Approach 2
int secondLarget(int *arr, int n){
    int max = INT_MIN, secondMax = INT_MIN;

    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }
        else if(secondMax < arr[i] and arr[i]!=max){
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<secondLarget(arr,n);

    delete []arr;
    return 0;
}