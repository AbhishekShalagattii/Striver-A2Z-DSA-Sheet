//So the program here is to find out the maximum len of the subarray which will have sum as k
#include<bits/stdc++.h>
using namespace std;

int maxSubArr(int arr[], int n,int k)
{
    int len = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for( int j = i; j < n; j++)
        {
            sum += arr[j];
            if( sum == k)
            {
                len = max(len,j-i+1);
            }
        }
    }
    return len;
}

int main()
{
    cout << "Enter the array length : ";
    int n;
    cin >> n;
    cout << "Enter the sum which you are lookin : ";
    int k;
    cin >> k;
    cout << "Enter the array elems : ";
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxSubArr(arr,n,k);
}