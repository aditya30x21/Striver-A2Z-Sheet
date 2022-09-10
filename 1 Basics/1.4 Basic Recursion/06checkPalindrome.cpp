#include <iostream>
using namespace std;

// Time - O(N/2)

bool isPalindrome(string input, int start, int end){
    if(start>=end){
        return true;
    }
    if(input[start]!= input[end]){
        return false;
    }
    return isPalindrome(input, start+1, end-1);
}

bool isPalindrome(string input, int start){
    if(start >= input.size()){
        return true;
    }
    if(input[start]!= input[input.length()-start-1]){
        return false;
    }

    return isPalindrome(input, start + 1);
}

int main(){
    string input;
    cin>>input;

    cout<<isPalindrome(input, 0, input.length()-1)<<endl;
    cout<<isPalindrome(input, 0);
    return 0;
}