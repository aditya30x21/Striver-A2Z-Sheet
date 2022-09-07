#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }

        int spaces = 1;
        while(spaces<=2*n-(2*i)){
            cout<<" ";
            spaces++;
        }
        /*
        int spaces1 = 1;
        while(spaces1<=n-i){
            cout<<" ";
            spaces1++;
        }

        int spaces2 = 1;
        while(spaces2<=n-i){
            cout<<" ";
            spaces2++;
        }
        */

        int k = 1;
        j--;
        while(k<=i){
            cout<<j;
            j--;
            k++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}