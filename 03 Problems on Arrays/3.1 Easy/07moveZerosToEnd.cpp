// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

#include <iostream>
using namespace std;

// Brute Force
// Time - O(N) Space - O(N)
void moveZerosToEndAP1(int *arr, int n){
    int *temp = new int[n]{0};
    int j = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]!=0){
            temp[j] = arr[i];
            j++;
        }
    }
    
    for(int i = 0;i<n;i++){
        arr[i] = temp[i];
    }
    delete []temp;
}

// Optimal Approach
// Time - O(N) Space - O(1)
void moveZerosToEndOptimal(int *arr, int n){
    for(int curr = 0, lastZero = 0;curr<n;curr++){
        if(arr[curr]!=0){
            swap(arr[lastZero++],arr[curr]);
        }
    }
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    // moveZerosToEndAP1(arr,n);
    moveZerosToEndOptimal(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    delete []arr;
    return 0;
}