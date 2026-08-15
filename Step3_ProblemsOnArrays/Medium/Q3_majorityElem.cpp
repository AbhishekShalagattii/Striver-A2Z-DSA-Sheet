//This is a program which will check the array and will return the elem that is happning to appear more than n/2 time in array
//Brute => n2 easy one

#include<bits/stdc++.h>
using namespace std;
//Better 
// int majorEle(int arr[], int n)
// {
//     map<int,int> mpp;
//     for(int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp)
//     {
//         if(it.second > n/2)
//         {
//             return it.first;
//         }
//     }
//     return -1;
// }

//Optimal => i.e using the moores voting algo
int majorEle(int arr[],int n)
{
    int cnt = 0, ele;
    for(int i = 0; i < n; i++)
    {
        if(cnt == 0)
        {
            cnt++;
            ele = arr[i];
        }
        else if(arr[i] == ele)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

    }
    // int cnt1;
    // for(int i = 0; i<n ; i++)
    // {
    //     if(arr[i] == ele)
    //     {
    //         cnt1++;
    //     }
    // }
    // if(cnt1 > n/2)
    // {
    
    //     return ele;
    // }
    // return -1;
    return ele;
}//=>This the code which will work iff majority elem exists in the array, if not sure we have to use another for loop to check if the ele appears more than n/2 times in array (that for loop is commented out)

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << majorEle(arr,n);
}