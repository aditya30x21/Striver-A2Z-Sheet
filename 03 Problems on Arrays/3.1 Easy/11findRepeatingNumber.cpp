#include <bits/stdc++.h>
using namespace std;

// Time - O(N) Space - O(N)
int repeatingNumber(int *arr, int n){
    unordered_map<int,int>map;
    for(int i= 0;i<n;i++){
        map[arr[i]]++;
    }
    for(int i = 0;i<n;i++){
        if(map[arr[i]] > 1){
            return arr[i];
        }
    }
    return -1;
}

// Time - O(NLogN) Space - O(1)
int repeatingNum(int *arr, int n){
    sort(arr,arr+n);
    for(int i = 1;i<n;i++){
        if(arr[i-1] == arr[i]){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << repeatingNumber(arr, n);
    return 0;
}