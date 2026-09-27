//Basical this program code will give us the lowest index where arr[ind] > x | x is a given number
#include<bits/stdc++.h>
using namespace std;

int searchLowBound(vector<int> &nums,int left,int right,int target)
{
    int low = left;
    int high = right;

    int ans = nums.size();

    while(low <= high)
    {
        int mid = (low + high)/2;

        if(nums[mid] >= target) 
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int x;
    cin >> x;

    vector<int> nums;
    
    for( int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    int res = searchLowBound(nums,0,n-1,x);
    cout << res;
}