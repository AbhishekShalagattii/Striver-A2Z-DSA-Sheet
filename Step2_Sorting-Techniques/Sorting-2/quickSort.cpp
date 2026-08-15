//Sorting the array elements using the quick sort technique:
#include<bits/stdc++.h>
using namespace std;

int partition_Fun(int arr[],int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        while(arr[i] <= pivot && i <= high-1)
        {
            i++;
        }
        while(arr[j] > pivot && j >= low+1)
        {
            j--;
        }
        if( i < j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(int arr[],int low,int high)
{
    if(low < high)
    {
        int pi = partition_Fun(arr,low,high);
        qs(arr,low,pi-1);
        qs(arr,pi+1,high);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    qs(arr,0,n-1);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}