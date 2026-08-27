//This is a program which will traver a matrix in spiral order
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralTraversal(vector<vector<int>> &arr, int n, int m)
{
    int top = 0, left = 0;
    int bottom = n-1, right = m-1;
    vector<int> ans;

    while(top<=bottom && left<=right)
    {
        //left to right
        for( int i = left; i <=  right; i++)
        {
            ans.push_back(arr[top][i]);
        }
        top++;

        //top to bottom
        for( int i = top; i <=bottom; i++)
        {
            ans.push_back(arr[i][right]);
        }
        right--;

        if(top<=bottom)
        {
            //left to right
            for( int i = right; i >= left; i--)
            {
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }

        if(left<=right)
        {
            //bottom to top
            for( int i = bottom; i >= top; i--)
            {
                ans.push_back(arr[i][left]);
            }
            left++;
        }

    }
    return ans;

}


int main()
{
    cout << "Enter the Number of rows";
    int n;
    cin >> n;
    cout << "Enter the Number of colums";
    int m;
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    cout << "Enter the matrix elements";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> ans = spiralTraversal(arr,n,m);

    for(auto it: ans)
    {
        cout << it << " ";
    }

}