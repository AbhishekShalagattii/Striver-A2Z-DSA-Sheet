// In this program for a pascal triangle we will be return a ele for which its row and col nor are given
#include <bits/stdc++.h>
using namespace std;

int print_nCr(int row, int col)
{
    long long res = 1;

    for (int i = 0; i < col; i++)
    {
        res = res * (row-i);
        res = res/(i+1);
    }

    return res;
}

int main()
{
    int row;
    cin >> row;
    int col;
    cin >> col;

    // so the formula to find the ele in pascal triangle with given row and col is if n=>row and r=>col then ele(ans) = n-1Cr-1
    cout << print_nCr(row - 1, col - 1); // so here we are passing row-1 and col-1
}