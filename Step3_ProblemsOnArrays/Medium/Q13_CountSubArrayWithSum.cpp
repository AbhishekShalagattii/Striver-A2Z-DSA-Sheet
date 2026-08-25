//This is the program which will give us the count/no of subarrays which are present in an array which are having sum == given sum

#include<bits/stdc++.h>
using namespace std;

int countSubArr(int arr[], int n, int k)
{
    int cnt = 0;
    int preSum = 0;

    map<int,int> mpp;
    mpp[0] = 1;

    for( int i = 0; i < n; i++)
    {
        preSum += arr[i];
        int remove = preSum - k;
        cnt += mpp[remove];
        mpp[preSum]+=1;
    }

    return cnt;
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

    cout << countSubArr(arr,n,k);
}