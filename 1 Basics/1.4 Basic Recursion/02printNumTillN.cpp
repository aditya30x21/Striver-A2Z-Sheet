#include <iostream>
using namespace std;

void printNumTillN(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    printNumTillN(i+1,n);
}

void printNumTillNBackTrack(int i, int n){
    if(i<1){
        return;
    }
    printNumTillNBackTrack(i-1,n);
    cout<<i<<" ";
}

void printNumNto1(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<" ";
    printNumNto1(i-1,n);
}

void printNumNto1BackTrack(int i, int n){
    if(i>n){
        return;
    }

    printNumNto1BackTrack(i+1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;

    printNumTillN(1,n);
    cout<<endl;
    printNumNto1(n,n);
    cout<<endl;
    printNumTillNBackTrack(n,n);
    cout<<endl;
    printNumNto1BackTrack(1,n);

    return 0;
}