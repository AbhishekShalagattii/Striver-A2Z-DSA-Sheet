//This problem sol will give use the count of subarray who have xor == given k
#include<bits/stdc++.h>
using namespace std;

int subArrwithXOR_K(vector<int> nums,int target)
{
    int n = nums.size();
    int preXor = 0;
    int cnt = 0;
    unordered_map<int,int>mpp;
    mpp[preXor] = 1;

    for( int i = 0; i < n; i++)
    {
        preXor ^= nums[i];
        int remove = preXor ^ target;
        cnt += mpp[remove];
        mpp[preXor] += 1;
    }
    return cnt;
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

    cout << subArrwithXOR_K(nums,target);
}