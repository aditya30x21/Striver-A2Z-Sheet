#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int currRow = 1;
    while(currRow<=n){
        int spaces = 1;
        while(spaces<=n-currRow){
            cout<<" ";
            spaces++;
        }

        char ch = 'A';
        int currCol = 1;
        while(currCol<=currRow){
            cout<<ch;
            ch++;
            currCol++;
        }

        ch = ch - 2;
        int k = 2*currRow-2;
        while(k>=currRow){
            cout<<ch;
            ch--;
            k--;
        }

        currRow++;
        cout<<endl;
    }
    return 0;
}