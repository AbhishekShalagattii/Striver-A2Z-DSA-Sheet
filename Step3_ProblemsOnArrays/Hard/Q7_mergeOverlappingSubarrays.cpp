//This problem sol will give us the vector of vector which will consiste of arrays which are the larger subarray of overlaping subarrays
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> mergeOverlapping(vector<vector<int>> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;

    for( int i = 0; i < n; i++)
    {
        int start = nums[i][0];
        int end = nums[i][1];
        if(!ans.empty() && end <= ans.back()[1]) continue;
        for(int j = i + 1; j < n; j++)
        {
            if(nums[j][0] < end)
            {
                end = max(end,nums[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    return ans;
}


int main()
{
    int n;
    cin >> n;
    vector<vector<int>> nums(n,vector<int>(2));

    for( int i = 0; i < n; i++)
    {
        for( int j = 0; j < 2; j++)
        {
            cin >> nums[i][j];
        }
    }

// cout << "[";

// for(int i = 0; i < nums.size(); i++)
// {
//     cout << "[";

//     for(int j = 0; j < nums[i].size(); j++)
//     {
//         cout << nums[i][j];

//         if(j != nums[i].size() - 1)
//             cout << ",";
//     }

//     cout << "]";

//     if(i != nums.size() - 1)
//         cout << ",";
// }

// cout << "]";

vector<vector<int>> ans = mergeOverlapping(nums);
cout << "[";

for(int i = 0; i < ans.size(); i++)
{
    cout << "[";

    for(int j = 0; j < ans[i].size(); j++)
    {
        cout << ans[i][j];

        if(j != ans[i].size() - 1)
            cout << ",";
    }

    cout << "]";

    if(i != ans.size() - 1)
        cout << ",";
}

cout << "]";


}