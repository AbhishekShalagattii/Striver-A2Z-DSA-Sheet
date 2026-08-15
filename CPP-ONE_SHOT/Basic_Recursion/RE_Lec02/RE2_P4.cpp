//Print from 1 To N using recursion with BackTracking
#include<bits/stdc++.h>
using namespace std;

void print_1ToN(int n)
{
    if( n < 1)
    {
        return;

    }
    print_1ToN(n - 1);
    cout << n << endl;
}


int main()
{
    int n;
    cin >> n;

    print_1ToN(n);
}