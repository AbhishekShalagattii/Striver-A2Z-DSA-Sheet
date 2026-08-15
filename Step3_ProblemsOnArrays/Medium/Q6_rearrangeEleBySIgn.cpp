//This is program which will return an array which will have elems as +ve,-ve,+ve,-ve so on..
//Optimal 
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrageElemsBySign(int arr[], int n)
{
    vector<int> ans(n,0);
    int postInd = 0, negInd = 1;
    for( int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            ans[postInd] = arr[i];
            postInd += 2;
        }
        else{
            ans[negInd] = arr[i];
            negInd += 2;
        }
    }

    return ans;
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

    vector<int> ans = rearrageElemsBySign(arr,n);

    for( auto it : ans)
    {
        cout << it << " ";
    }
}