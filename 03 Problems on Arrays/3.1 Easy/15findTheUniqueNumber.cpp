#include <iostream>
using namespace std;
/*
Approach 1:
Use a Map to store all elements and then return the one which have key equal to 1
Time - O(N) Space - O(N)
*/

/*
Approach 2:
Using Sorting.
i.Sort the array and then compare the i'th and the i-1'th element if its not equal return the i-1'th element.
ii.Increment i+=2
iii. If you reach the end return (n-1)th element.

// TC: O(NlogN)
// SC: O(1)

int singleNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i+=2){
        if(nums[i]!=nums[i-1])
            return nums[i-1];
    }
    return nums[nums.size()-1];
}
*/

// Time - O(N)
// Space - O(1)
int uniqueNumber(int *arr, int n)
{
    int xorSum = arr[0];
    for(int i = 1;i<n;i++){
        xorSum ^= arr[i];
    }
    // 1 ^ 1 = 0, So basically the elements get eliminted leaving only the unique element
    return xorSum;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << uniqueNumber(arr, n);

    delete[] arr;
    return 0;
}
