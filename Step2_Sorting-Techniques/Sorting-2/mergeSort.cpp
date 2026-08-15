//sorting the array elements using merge sort which is divide and merge 
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int h)
{
    vector<int> temp;
    int left = l;
    int right = mid+1;
    while(left <= mid && right <= h)
    {
        if(arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= h)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for( int i = l; i <= h;i++)
    {
        arr[i] = temp[i - l];
    }
}

void mergeSort(int arr[], int l, int h)
{
    if(l >= h)
    {
        return;
    }
    int mid = (l + h) / 2;
    mergeSort(arr,l, mid);
    mergeSort(arr,mid+1,h);
    merge(arr,l,mid,h);
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

    mergeSort(arr,0,n-1);


    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}