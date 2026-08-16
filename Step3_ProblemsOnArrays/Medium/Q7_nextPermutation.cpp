//This is a program that will give you the next permutation of the given number array
#include<bits/stdc++.h>
using namespace std;

vector<int> nextPerm(vector<int> nums, int n)
{
    int ind = -1;

    for(int i = n-2; i >= 0; i--)
    {
        if(nums[i] < nums[i+1])
        {
            ind = i;
        }
    }

    if(ind == -1)
    {
        reverse(nums.begin(), nums.end());
        return nums;
    }

    for( int i = n-1; i >= ind; i--)
    {
        if(nums[i] > nums[ind])
        {
            swap(nums[i], nums[ind]);
            break;
        }
    }


    reverse(nums.begin()+ind+1, nums.end());
    return nums;
}


int main()
{
    int n;
    cin >> n;
    vector<int> nums;

    for(int i = 0 ; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }


    vector<int> ans = nextPerm(nums,n);

    for(auto it:ans)
    {
        cout << it << " ";
    }
}