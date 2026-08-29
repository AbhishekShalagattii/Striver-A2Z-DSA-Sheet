//This is a program which will give an ans arrayy which contains elems from array which are happning to appear more than n/3 times
#include<bits/stdc++.h>
using namespace std;

vector<int> getMajority(vector<int> &nums)
{
    int n = nums.size();
    int minFre = int (n/3) + 1;
    vector<int> ans;
    unordered_map<int,int> mpp;

    for(int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
        if(mpp[nums[i]] == minFre)
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;

}


int main()
{
    int n ;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<int> ans = getMajority(nums);

    for(auto it : ans)
    {
        cout << it << " ";
    }

}