//This is a program which will give us the elems which are not having any elems greater that it on right side 
//Eg. arr[] = { 10,22,12,3,0,6} => so the leaders in this array are 22,12,6
#include<bits/stdc++.h>
using namespace std;

//Brute force appraoch
// vector<int> leaderInArr(int arr[], int n)
// {
//     vector<int> ans;
//     for(int i = 0; i < n; i++)
//     {
//         bool leader = 1;
//         for(int j = i+1; j<n; j++)
//         {
//             if(arr[j] > arr[i])
//             {
//                 leader = 0;
//                 break;
//             }
//         }
//         if(leader == 1)
//         {
//             ans.push_back(arr[i]);
//         }
//     }
//     return ans;
// }

//Optimal approach 
vector<int>  leaderInArr(int arr[], int n)
{
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] > maxi)
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
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

    vector<int> ans = leaderInArr(arr, n);

    for(auto it:ans)
    {
        cout << it << " ";
    }
}