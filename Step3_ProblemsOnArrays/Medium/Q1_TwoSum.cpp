// //Better approach for returning a string that will tell yes or no if two elements are there whos sum is equal to the given target
// //This code/program is optimal for varity 2 i.e to return index but it is better approach for variety 1 which is yes/no 
// #include<bits/stdc++.h>
// using namespace std;

// bool twoSum(int arr[], int n, int target)
// {
//     map<int,int>mpp;
//     for(int i = 0; i < n; i++)
//     {
//         int a = arr[i];
//         int rem = target - a;
//         if(mpp.find(rem) != mpp.end())
//         {
//             return true; //return {mpp[rem], i}; => for the second variety of the same question : which is to return the indexes which make sum == target
//         }
//         mpp[a] = i;
//     }
//     return false; //return {} no index if at all any elems do not make sum == target
// }

// int main()
// {
//     cout << "Enter the array size";
//     int n;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array elements";
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the target ";
//     int tar ;
//     cin >> tar;


//     cout << twoSum(arr,n,tar);
// }

//optimal approach for the variety one
#include<bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int n, int targ)
{
    int left = 0;
    int right = n-1;
    while(left < right)
    {
        int sum = arr[left] + arr[right];
        if(sum == targ)
        {
            return true;
        }
        else if(sum < targ ) left++;
        else right--;
    }
    return false;
}

int main()
{
    cout << "Enter the array size";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target ";
    int tar ;
    cin >> tar;


    cout << twoSum(arr,n,tar);
}

