#include <iostream>
using namespace std;

int reverse(int n){
    int reverse = 0;
    while(n>0){
        int ld = n%10;
        reverse = reverse * 10 + ld;
        n/=10;
    }
    return reverse;
}

int main(){
    int n;
    cin>>n;
    
    cout<<reverse(n);
    return 0;
}