//This is a program which will give us all the row elems if n = 5 then the solution function will give us all the pascal triangle elems from row 1 to given N in an array
#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow( int row)
{
    int ans = 1;
    vector<int> res;
    res.push_back(ans);

    for( int col = 1; col < row; col++)
    {
        ans = ans * ( row - col);
        ans = ans/col;
        res.push_back(ans);
    }
    return res;
}

vector<vector<int>> printAllPascalElems(int row)
{
    vector<vector<int>> temp;

    for( int i = 1; i <= row; i++)
    {
        temp.push_back(generateRow(i));
    }
    return temp;
}

int main()
{
    int row;
    cin >> row;

    vector<vector<int>> ans = printAllPascalElems(row);

    for(auto r : ans)
    {
        for(auto ele : r)
        {
            cout << ele<< " ";
        }
        cout << endl;

    }
}