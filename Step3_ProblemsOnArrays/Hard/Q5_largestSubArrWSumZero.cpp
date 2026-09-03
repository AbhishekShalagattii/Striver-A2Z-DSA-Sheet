//This problem states that we must return the maxLen of a subArr whose sum is equal to 0
#include<bits/stdc++.h>
using namespace std;

int maxLenOfSubArr(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    int maxLen = 0;
    map<int,int> mpp;
    for( int i = 0; i < n; i++)
    {
        sum+=nums[i];

        if(sum == 0)
        {
            maxLen = i+1;
        }

        if(mpp.find(sum) != mpp.end())
        {
            maxLen = max(maxLen,i - mpp[sum]);
        }
        else{
            mpp[sum] = i;
        }

    }
    return maxLen;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    for( int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }


    cout << maxLenOfSubArr(nums);
}