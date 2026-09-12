//This program sol will give/return  us the missing and repeating numbers from an array
#include<bits/stdc++.h>
using namespace std;

//Better Approach using the hashArr
vector<int> findMissAndRepeatNums(vector<int> &nums)
{
    int n = nums.size();
    int hashArr[n+1] = {0};

    for( int i = 0; i < n; i++)
    {
        hashArr[nums[i]]++;
    }

    int missing = -1, repeating = -1;

    for( int i = 1; i <= n; i++)
    {
        if(hashArr[i] == 0) missing = i;
        else if(hashArr[i] == 2) repeating = i;

        if(repeating != -1 && missing != -1) break;
    }

    return {repeating,missing};
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

    vector<int> res = findMissAndRepeatNums(nums);

    for( auto it : res)
    {
        cout << it << " ";
    }
}