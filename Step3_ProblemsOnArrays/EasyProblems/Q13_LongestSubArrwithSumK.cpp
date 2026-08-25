//This program will give us the maxi leng of the subarray(contigeous part of array) with sum == give sum k
#include<bits/stdc++.h>
using namespace std;

int longSubArr(int arr[], int n,int k)
{
    int i = 0, j = 0;
    int sum = arr[0];
    int maxLen = 0;

    while(j < n)
    {
        while(i <= j && sum > k)
        {
            sum -= arr[i];
            i++;
        }
        if( sum == k)
        {
            maxLen = max(maxLen,j-i+1);
        }
        j++;

        if(i < n)
        {
            sum += arr[j];
        }
    }
    return maxLen;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for( int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << longSubArr(arr,n,k);
}