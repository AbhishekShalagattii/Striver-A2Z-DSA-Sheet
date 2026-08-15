#include<bits/stdc++.h>
using namespace std;

int bestProfit(int arr[],int n)
{
    int mini = arr[0];
    int maxProfit = 0;

    for( int i = 0; i < n; i++ )
    {
        int currProfit = arr[i] - mini;
        maxProfit = max( maxProfit,currProfit );
        mini = min( arr[i], mini);
    }

    return maxProfit;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ )
    {
        cin >> arr[i];
    }

    cout << bestProfit(arr,n);
}