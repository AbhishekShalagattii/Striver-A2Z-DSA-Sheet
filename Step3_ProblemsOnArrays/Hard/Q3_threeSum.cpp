//This program will give us the three elem in an array whose sum will be equal to 0
#include<bits/stdc++.h>
using namespace std;

//Better approach using hastSet 
// vector<vector<int>> getThreeSum(vector<int> &nums)
// {
//     int n = nums.size();
//     set<vector<int>> st;

//     for(int i = 0; i < n; i++)
//     {
//         set<int> hashset;
//         for(int j = i + 1; j < n; j++)
//         {
//             int third = - (nums[i] + nums[j]);
//             if(hashset.find(third) != hashset.end())
//             {
//                 vector<int> temp = {nums[i],nums[j],third};
//                 sort(temp.begin(),temp.end());
//                 st.insert(temp);
//             }
//             hashset.insert(nums[j]);
//         }
//     }

//     vector<vector<int>>ans (st.begin(),st.end());
//     return ans;
// }

vector<vector<int>> getThreeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(),nums.end());
    for( int i = 0; i < n; i++)
    {
        if(i>0 && nums[i] == nums[i-1])continue;
        int j = i + 1;
        int k = n - 1;

        while( j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if( sum < 0)
            {
                j++;
            }
            else if( sum > 0)
            {
                k--;

            }
            else{
                vector<int> temp = { nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;
}


int main()
{
    int n;
    cin >> n;
    vector<int> nums;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> ans = getThreeSum(nums);

    for( auto it : ans)
    {
        cout << "[";
        for(auto ele : it)
        {
            cout << ele <<" ";
        }
        cout << "]";
        cout << endl;
    }
}