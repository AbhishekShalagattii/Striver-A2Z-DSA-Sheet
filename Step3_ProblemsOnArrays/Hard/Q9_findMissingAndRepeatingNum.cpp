//This program sol will give/return  us the missing and repeating numbers from an array
#include<bits/stdc++.h>
using namespace std;

//Better Approach using the hashArr Tc~O(2N) SC~O(N)
// vector<int> findMissAndRepeatNums(vector<int> &nums)
// {
//     int n = nums.size();
//     int hashArr[n+1] = {0};

//     for( int i = 0; i < n; i++)
//     {
//         hashArr[nums[i]]++;
//     }

//     int missing = -1, repeating = -1;

//     for( int i = 1; i <= n; i++)
//     {
//         if(hashArr[i] == 0) missing = i;
//         else if(hashArr[i] == 2) repeating = i;

//         if(repeating != -1 && missing != -1) break;
//     }

//     return {repeating,missing};
// }

vector<int> findMissAndRepeatNums(vector<int> &nums)
{
    int n = nums.size();
    int SN = (n*(n+1))/2;
    int S2N = (n*(n+1)*(2*n+1))/6;
    int S = 0, S2 = 0;

    for( int i = 0; i < n; i++)
    {
        S += nums[i];
        S2 += nums[i] * nums[i];
    }

    int val1 = S - SN;
    int val2 = S2 - S2N;
    val2 = val2/val1;
    int x = (val1+val2)/2;
    int y = x - val1;
    return {x,y};
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