#include<bits/stdc++.h>
using namespace std;

int findConsOnes(int arr[], int n)
{
    int cnt = 0;
    int maxi = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            cnt++;
        }
        else if(arr[i] == 0)
        {
            cnt = 0;
        }
        if(cnt > maxi)
        {
            maxi = cnt;
        }
    }
    return maxi;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findConsOnes(arr,n);
}