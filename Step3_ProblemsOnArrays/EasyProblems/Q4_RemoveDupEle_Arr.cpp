// In this program we try to remove the duplicate elements from the array or in other words , we will be only storing the unique elems in array
//  ==>>Brute Force, TC = O(N+NlogN)because set insertion takes nlogn tc, and copying set ele to arr take n tc, SC = O(n)
//  #include<bits/stdc++.h>
//  using namespace std;

// int removeDups(int arr[],int n)
// {
//     //Storing the unique elements using set ds
//     set<int> st;

//     for(int i = 0; i < n; i++)
//     {
//         st.insert(arr[i]);
//     }

//     //Copying the set<int> elements back to the og array
//     int ind = 0;
//     for(auto it:st)
//     {
//         arr[ind] = it;
//         ind++;
//     }

//     for(int i = 0; i < ind;i++)
//     {
//         cout << arr[i] <<" ";
//     }

//     return ind;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "size of array with unique elements " << removeDups(arr,n);
// }

// Optimal approach
// Using the Optimal two pointer approach

#include <bits/stdc++.h>
using namespace std;

int  unique_elems(int arr[], int n)
{
    int i = 0;

    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "size of array with unique elements " << unique_elems(arr, n);
}