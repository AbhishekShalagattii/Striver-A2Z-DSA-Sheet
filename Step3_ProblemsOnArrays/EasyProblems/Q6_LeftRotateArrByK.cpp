// This is the problem to left Rotate an array by d places
//  #include<bits/stdc++.h>
//  using namespace std;

// void leftRotateArr(int arr[],int n, int d)
// {
//     d = d % n;

//     int temp[d];
//     //storing the first d places in temp
//     for(int i = 0;i<d;i++)
//     {
//         temp[i] = arr[i];
//     }

//     //shifting the array elements
//     for(int i = d; i < n;i++)
//     {
//         arr[i-d] = arr[i];
//     }
//     //Copying array temp elems back to array
//     for(int i = n-d; i < n; i++)
//     {
//         arr[i] = temp[i-(n-d)];
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for( int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;

//     leftRotateArr(arr,n,d);

//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// Optimal appraoch
#include <bits/stdc++.h>
using namespace std;

void leftRotateArr(int arr[], int n, int d)
{
    d = d % n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
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
    int d;
    cin >> d;

    leftRotateArr(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}