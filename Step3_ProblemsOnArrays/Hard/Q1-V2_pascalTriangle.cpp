// so this is program which will print us the nth row of a pascal triangle
#include <bits/stdc++.h>
using namespace std;

vector<int> printNth_row(int row)
{
    vector<int> res;
    int ans = 1;
    res.push_back(ans);

    for (int i = 1; i < row; i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
        res.push_back(ans);
    }

    return res;
}

int main()
{
    int row;
    cin >> row;

    vector<int> ans = printNth_row(row);

    for(auto it:ans)
    {
        cout << it <<" ";
    }
}