// //Program to find the largest element in an array
// //1 better approach
// #include<bits/stdc++.h>
// using namespace std;

// int slargestElement(int arr[], int n)
// {
//     int largestEle = arr[0];
//     for( int i = 1; i < n; i++)
//     {
//         if(arr[i] > largestEle)
//         {
//             largestEle = arr[i];
//         }
//     }

//     int secondlargest = -1;
//     for( int i = 0; i < n; i++)
//     {
//         if(arr[i] < largestEle && arr[i] != largestEle )
//         {
//             secondlargest = arr[i];
//         }
//     }
//     return secondlargest;
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

//     cout << slargestElement(arr,n);
// } => TC = O(2N)

// Optimal approach
#include <bits/stdc++.h>
using namespace std;

int slargestElement(int arr[], int n)
{
    int largestEle = arr[0];
    int sLargestEle = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largestEle)
        {
            sLargestEle = largestEle;
            largestEle = arr[i];
        }
        else if(arr[i] != largestEle && arr[i] > sLargestEle)
        {
            sLargestEle = arr[i];
        }
    }
    

    return sLargestEle;
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

    cout << slargestElement(arr, n);
}
