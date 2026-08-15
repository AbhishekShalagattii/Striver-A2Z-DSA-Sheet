//print 1 to N using Recurison
#include<bits/stdc++.h>
using namespace std;

void print1ToN(int i, int n)
{
    if(i > n)
    {
        return;
    }
    cout << i << endl;
    print1ToN(i+1,n);
}


int main()
{
    int n;
    cin >> n;

    print1ToN(1,n);
}