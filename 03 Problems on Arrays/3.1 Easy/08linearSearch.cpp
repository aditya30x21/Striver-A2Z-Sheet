#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){
    for(int i = 0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1,2,0,4,5};
    int k = 0;
    cout<<linearSearch(arr,5,k);

    return 0;
}