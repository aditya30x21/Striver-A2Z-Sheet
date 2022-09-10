#include <iostream>
using namespace std;
#include <unordered_map>

void frequencyCount(int *arr, int n){
    unordered_map<int,int> map;
    for(int i = 0;i<n;i++){
        map[arr[i]]++;
    }

    for(int i = 0;i<n;i++){
        if(map[i+1]){
            arr[i] = map[i+1];
        }
        else{
            arr[i] = 0;
        }
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
    printArray(arr,n);
    frequencyCount(arr,n);
    printArray(arr,n);


    return 0;
}