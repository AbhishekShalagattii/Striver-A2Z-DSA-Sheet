// This is a program code which will set rows and column of a matrix if any arr[i][j] = 0
#include <bits/stdc++.h>
using namespace std;

void setRowzero(vector<vector<int>> &arr, int i, int m)
{
    for (int j = 0; j < m; j++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void setColzero(vector<vector<int>> &arr, int j, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void setMatrixZero(vector<vector<int>> &arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                setRowzero(arr, i, m);
                setColzero(arr, j, n);
            }
        }
    }
    // Convert -1 to 0
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    cout << "Enter the nor of rows : " << endl;
    int n;
    cin >> n;
    cout << "Enter the nor of rows : " << endl;
    int m;
    cin >> m;

    // int arr[n][m];
    vector<vector<int>> arr(n,vector<int>(m));

    cout << "Enter the matrix elements";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    setMatrixZero(arr, n, m);

    cout << "Matrix after setting zeroes:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}