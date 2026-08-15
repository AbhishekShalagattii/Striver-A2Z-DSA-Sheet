//Program to find the largest element in an array
#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n)
{
    int largestEle = arr[0];
    for( int i = 1; i < n; i++)
    {
        if(arr[i] > largestEle)
        {
            largestEle = arr[i];
        }
    }
    return largestEle;
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

    cout << largestElement(arr,n);
}