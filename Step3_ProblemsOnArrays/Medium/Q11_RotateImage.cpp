// This is a program which will give us the array which is rotated by 90 deg
#include <bits/stdc++.h>
using namespace std;

void rotateImage(vector<vector<int>> &arr, int n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(),arr[i].end());
    }
}

int main()
{
    cout << "Enter the Number for MXM";
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "Enter the matrix elements";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    rotateImage(arr, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}