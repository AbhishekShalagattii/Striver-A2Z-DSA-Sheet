//This is a program which will give an ans arrayy which contains elems from array which are happning to appear more than n/3 times
#include<bits/stdc++.h>
using namespace std;

//Betterr approach
// vector<int> getMajority(vector<int> &nums)
// {
//     int n = nums.size();
//     int minFre = int (n/3) + 1;
//     vector<int> ans;
//     unordered_map<int,int> mpp;

//     for(int i = 0; i < n; i++)
//     {
//         mpp[nums[i]]++;
//         if(mpp[nums[i]] == minFre)
//         {
//             ans.push_back(nums[i]);
//         }
//     }
//     return ans;

// }

vector<int> getMajority(vector<int> &nums)
{
    int n = nums.size();
    int cnt1 = 0,cnt2 = 0;
    int elem1,elem2 = INT_MIN;
    int mini = (int)(n/3)+1;
    
    vector<int> ans;

    for(int i = 0; i < n; i++)
    {
        if(cnt1 == 0 && nums[i] != elem2)
        {
            elem1 = nums[i];
            cnt1 = 1;
        }
        else if(cnt2 == 0 && nums[i] != elem1)
        {
            elem2 = nums[i];
            cnt2 = 1;
        }
        else if(nums[i] == elem1)
        {
            cnt1++;
        }
        else if(nums[i] == elem2)
        {
            cnt2++;
        }
        else{
            cnt1--,cnt2--;
        }
    }

    ans.push_back(elem1);
    ans.push_back(elem2);
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