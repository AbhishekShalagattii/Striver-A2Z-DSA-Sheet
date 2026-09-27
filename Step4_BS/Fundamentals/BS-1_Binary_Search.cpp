//Basically this program search for a target by using binary search algo which will divide the array and search in left or right halves
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &nums,int left,int right,int target)
{
    int low = left;
    int high = right;
    
    while(low <= high)
    {
        int mid = low + (high-low)/2;

        if(nums[mid] == target) return mid;
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }  
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> nums;

    for( int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int res = BinarySearch(nums,0,n-1,target);
    cout << res << " ";
}