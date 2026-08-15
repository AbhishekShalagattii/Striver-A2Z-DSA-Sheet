//Using the Map ds we count the frequency of a number/ele in an array without creating an predefined auxilary array called hash, which we did in the P1 problem because the cap for defining an array with dt int inside the main is arr[10^7]int 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    map<int,int>mpp;
    for( int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // // pre-compute
    // map<int,int>mpp;
    // for( int i = 0; i < n; i++)
    // {
    //     mpp[arr[i]]++;
    // }

    for( auto it : mpp)
    {
        cout << it.first <<"->"<< it.second<<endl;
    }

    int q;
    cin >> q;
    while(q--)
    {
        int num;
        cin >> num;
        cout << mpp[num] <<" ";
    }
    return 0;

}