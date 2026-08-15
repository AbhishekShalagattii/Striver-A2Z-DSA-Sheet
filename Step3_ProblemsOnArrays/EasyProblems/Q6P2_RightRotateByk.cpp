//This is another pattern of rotating the array with distance k with rotate right
//Ex [1,2,3,4,5,6,7] k = 3 op must be [5,6,7,1,2,3,4]

#include<bits/stdc++.h>
using namespace std;

void rotateArrByKInRight(int arr[], int n, int k)
{
    //storing the right elems
    vector<int> temp;
    for(int i = n-k; i < n; i++)
    {
        temp.push_back(arr[i]);
    }

    //shifting the remaining elems
    for(int i = n-k-1; i >= 0; i--)
    {
        arr[i+k] = arr[i];
    }
    //replacing the empty spaces
    for(int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rotateArrByKInRight(arr,n,k);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}