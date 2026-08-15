//Print Name Five Times using Recursion
#include<bits/stdc++.h>
using namespace std;

void printName( int i, int n)
{
    if( i > n)
    {
        return;
    }
    cout << "AbhiShek" << endl;
    printName(i+1,n);
}


int main()
{
    int n;
    cin >> n;

    printName(1,n);
}