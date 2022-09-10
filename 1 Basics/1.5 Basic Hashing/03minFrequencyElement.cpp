#include <bits/stdc++.h>
using namespace std;

int minFrequency(int *arr, int n)
{
    unordered_map<int, int> freq;
    int minFreq = 0;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int key = 0;
    int value = INT_MAX;
    for(int i = 0;i<n;i++){
        if(freq[arr[i]] < value){
            key = arr[i];
            value = freq[arr[i]];
        }
    }
    return key;


    /*
    unordered_map<int, int> freq;
    int minFreq = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;

        minFreq = min(minFreq, freq[arr[i]]);
    }

    int minFreqElement;
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == minFreq)
        {
            minFreqElement = arr[i];
            break;
        }
    }
    return minFreqElement;
    */
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << minFrequency(arr, n);
    return 0;
}