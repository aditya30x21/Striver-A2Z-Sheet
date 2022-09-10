#include <iostream>
using namespace std;

int sumTillN(int n){
    // Time - O(n) Space - O(1)
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum+=i;
    }
    return sum;

    /*
    // From this approach - Time - O(1) Space - O(1)
    sum = n(n+1)/2;
    */
}

int sumTillNRecursive(int n){
    // Time - O(n) Space - O(n)
    if(n == 0){
        return 0;
    }
    return n + sumTillNRecursive(n-1);
}

void sumRecursiveParameterized(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    sumRecursiveParameterized(i - 1, sum + i);
}

int main(){
    int n;
    cin>>n;

    cout<<sumTillN(n)<<endl;
    cout<<sumTillNRecursive(n)<<endl;
    sumRecursiveParameterized(n,0);

    return 0;
}