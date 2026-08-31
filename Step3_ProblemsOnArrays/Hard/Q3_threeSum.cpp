//This program will give us the three elem in an array whose sum will be equal to 0

//Better approach using hastSet 

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getThreeSum(vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> st;

    for(int i = 0; i < n; i++)
    {
        set<int> hashset;
        for(int j = i + 1; j < n; j++)
        {
            int third = - (nums[i] + nums[j]);
            if(hashset.find(third) != hashset.end())
            {
                vector<int> temp = {nums[i],nums[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }

    vector<vector<int>>ans (st.begin(),st.end());
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