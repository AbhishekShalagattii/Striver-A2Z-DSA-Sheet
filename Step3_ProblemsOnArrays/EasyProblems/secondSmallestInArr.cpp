//Program to try and find the second smallest element in an array
#include<bits/stdc++.h>
using namespace std;

int secondSmallestEle(int arr[], int n)
{
    int smallest = arr[0];
    int secSmallest = INT32_MAX;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            secSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < secSmallest)
        {
            secSmallest = arr[i];
        }
    }
    return secSmallest;
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

    cout << secondSmallestEle(arr,n);
}