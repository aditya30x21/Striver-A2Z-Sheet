#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(j == 0 or j == n-1 or i == 0 or i == m-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    /*
    Output - 
    ****
    *  *
    *  *
    *  *
    **** 
    */

}