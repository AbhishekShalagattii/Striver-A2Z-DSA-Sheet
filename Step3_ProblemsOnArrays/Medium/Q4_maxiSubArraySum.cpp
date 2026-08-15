//This is a program that will give the maximum sum with all positive and negative elems
#include<bits/stdc++.h>
using namespace std;
int maxiSubArrSum(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    int start = 0;
    int arrs = -1, arre = -1;
    for( int i = 0 ; i < n; i++)
    {
        if(sum == 0) start = i;
        sum += arr[i];
        if(sum > maxi)
        {
            maxi = sum;
            arrs = start;
            arre = i;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    cout << arrs <<" " << arre<<endl;
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

    cout << maxiSubArrSum(arr,n);
}