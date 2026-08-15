#include<bits/stdc++.h>
using namespace std;

int factOfN( int n)
{
    if( n == 1)
    {
        return 1;
    }
    return n * factOfN(n-1);
}

int main()
{
    int n;
    cin >> n;

    int fact = factOfN(n);
    cout << fact << endl;
}