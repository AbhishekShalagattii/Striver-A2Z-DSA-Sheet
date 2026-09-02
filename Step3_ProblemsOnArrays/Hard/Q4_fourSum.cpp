//This is a program which will give us the elems(4elems) who sum is equal to 0 ,provided the indexes of the elems should not be same
#include<bits/stdc++.h>
using namespace std;

//Better approach
// vector<vector<int>> getFourSum(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     set<vector<int>> st;
//     for( int i = 0; i < n; i++)
//     {
//         for( int j = i+1; j < n; j++)
//         {
//             set<int> hashset;
//             for( int k = j+1; k < n; k++)
//             {
//                 long long sum = nums[i] + nums[j];
//                 sum += nums[k];
//                 int fourth = target - sum;
//                 if( hashset.find(fourth) != hashset.end())
//                 {
//                     vector<int> temp = {nums[i],nums[j],nums[k],(int)fourth};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(nums[k]);
//             }
//         }
//     }
//     vector<vector<int>> ans (st.begin(),st.end());
//     return ans;
// }

//Optimal approach => using two pointer approach
vector<vector<int>> getFourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(),nums.end());
    for( int i = 0; i < n; i++)
    {
        if( i > 0 && nums[i] == nums[i-1])continue;
        for( int j = i+1; j < n; j++)
        {
            if( j > i+1 && nums[j] == nums[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while( k < l)
            {
                long long  sum = nums[i] + nums[j];
                sum += nums[k];
                sum += nums[l];

                if(sum < target)
                {
                    k++;
                }
                else if(sum > target)
                {
                    l--;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k < l && nums[k] == nums[k-1])k++;
                    while(k < l && nums[l] == nums[l+1])l--;
                }
            }
        }
    }
    return ans;
}


int main()
{
    int n ;
    cin >> n;
    int targ;
    cin >> targ;

    vector<int> nums;

    for( int i = 0; i < n; i++ )
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> res = getFourSum(nums, targ);

    for(auto it: res)
    {
        cout <<"[";
        for(auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "]";
        cout << endl;
    }

}