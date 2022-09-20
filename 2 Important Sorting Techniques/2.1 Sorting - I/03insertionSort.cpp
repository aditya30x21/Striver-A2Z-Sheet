#include <iostream>
using namespace std;

// Time - O(n^2)
// Space - O(1)

void insertionSort(int *arr, int n){
    for(int i = 1;i<n;i++){
        int current = arr[i];
        int j;
        for(j = i-1;j>=0;j--){
            if(arr[j] > current){
                arr[j+1] = arr[j];
            }
        }
        arr[j + 1] = current;
    }
}

void printArray(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}