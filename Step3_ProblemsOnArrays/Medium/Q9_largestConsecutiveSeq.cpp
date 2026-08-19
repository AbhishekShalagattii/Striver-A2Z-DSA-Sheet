// This is program which will return the largest sequence in an array
#include <bits/stdc++.h>
using namespace std;

int largestSeqInArr(vector<int> &nums, int n)
{
    int largest = 1;
    int currentCnt = 0;
    int lastSmallest = INT_MIN;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {

        if (nums[i] - 1 == lastSmallest)
        {
            currentCnt++;
            lastSmallest = nums[i];
        }
        else if (nums[i] != lastSmallest)
        {
            currentCnt = 1;
            lastSmallest = nums[i];
        }
        largest = max(largest, currentCnt);
    }

    return largest;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << largestSeqInArr(nums, n);
}