#include <iostream>
using namespace std;
// Time - O(n+m) Space - O(1)
int searchElement(int **arr, int n, int m, int key)
{
    int row = 0, col = m - 1;
    while (row < n and col >= 0)
    {
        if(arr[row][col] == key){
            return 1;
        }
        else if(arr[row][col] < key){
            row++;
        }
        else if(arr[row][col] > key){
            col--;
        }
    }
}

/*
// Approach 2 - Leetcode Question Solution
Time - O(N*LogN)
bool binarySearch(vector<int> &arr, int m, int n, int target)
{
    int start = m;
    int end = n;

    while (start < end){
        int mid = (start + end) / 2;

        if (arr[mid] == target){
            return true;
        }
        else if (arr[mid] > target){
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    bool ans = false;
    for (int i = 0; i < matrix.size(); i++)
    {
        ans = binarySearch(matrix[i], 0, matrix[i].size(), target);
        if (ans)
        {
            break;
        }
    }
    return ans;
}
*/

/*
// Approach 1
// Time - O(N^2) Space - O(1)
int searchElement(int **arr,int n,int m, int key){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j] == key){
                return key;
            }
        }
    }
    return -1;
}
*/
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cin >> key;
    cout << searchElement(arr, n, m, key);

    return 0;
}
