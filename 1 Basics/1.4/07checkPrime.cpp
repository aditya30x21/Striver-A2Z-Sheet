#include<bits/stdc++.h>
using namespace std;

// for i till N - O(n)
// for i till sqrt(N) - O(√n)
bool checkPrime(int n){
    for(int i = 2;i<sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    string ans = checkPrime(n)?"YES":"NO";
    cout<<ans<<endl;
    return 0;
}