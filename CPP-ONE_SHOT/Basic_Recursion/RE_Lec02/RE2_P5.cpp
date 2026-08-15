//Print Numbers from N To 1 using Recursion and Backtracking 
#include<bits/stdc++.h>
using namespace std;

// void print_nTo1(int i, int n )
// {
//     if ( i > n)
//     {
//         return;
//     }
//     print_nTo1(i+1,n);
//     cout << i << endl;
// }

void print_nTo1(int n, int i)
{
    if( i > n)
    {
        return;
    }
    print_nTo1( n, i+1);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;

    print_nTo1(n,1);
}