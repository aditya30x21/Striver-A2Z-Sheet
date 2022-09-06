#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int spaces = 1;
        while(spaces <= n - row){
            cout<<" ";
            spaces++;
        }
        int col = 1;
        while(col<=2 * row - 1){
            cout<<'*';
            col++;
        }    
        row++;
        cout<<endl;
    }

    int i = 5;
    while(i>=1){
        
        int spaces = n - i;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        int j = 1;
        while (j<=2 * i - 1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }

    /*
    Output - 
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
    */
}