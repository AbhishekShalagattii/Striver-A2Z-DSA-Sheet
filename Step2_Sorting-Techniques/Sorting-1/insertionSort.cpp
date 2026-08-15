//sorting the array elements using the insertion sort technique where the element is take and placed in its correct order
#include<bits/stdc++.h>
using namespace std;

void selectionSort( int arr[], int n)
{
    for( int i = 0; i < n; i++)
    {
        int j = i ;
        while (j > 0 && arr[j - 1] > arr[j])
        {
           swap(arr[j], arr[j-1]);
           j--;
        }
        
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort( arr,n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}