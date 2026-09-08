//This problem solution will do the merege of two sorted array who have length n and m respectively and the resulting array will have length n+m
#include<bits/stdc++.h>
using namespace std;

void mergeSortedArr(int arr1[],int arr2[],int n,int m)
{
    int arr3[n+m];
    int left = 0;
    int right = 0;
    int index = 0;

    while (left < n && right < m)
    {
        if(arr1[left] <= arr2[right])
        {
            arr3[index] = arr1[left];
            left++,index++;
        }
        else{
            arr3[index] = arr2[right];
            right++,index++;
        }
    }

    while (left < n)
    {
        arr3[index++] = arr1[left++];
    }
    while (right < m)
    {
        arr3[index++] = arr2[right++];
    }

    for( int i = 0; i < n+m; i++)
    {
        if(i<n) arr1[i] = arr3[i];
        else arr2[i-n] = arr3[i];
    }
    
    
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    int arr1[n];
    int arr2[m];

    for( int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for( int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    mergeSortedArr(arr1,arr2,n,m);

    //print arr1
    for( int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    //print arr2
    for( int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}