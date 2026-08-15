#include<bits/stdc++.h>
using namespace std;

bool sortAndRotated(int arr[], int n)
{
    int cnt;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[i+1])
        {
            cnt++;
        }
    }
    if(arr[n-1] > arr[0])
    {
        cnt++;
    }

    return cnt <= 1;
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

    cout << sortAndRotated(arr,n);
}