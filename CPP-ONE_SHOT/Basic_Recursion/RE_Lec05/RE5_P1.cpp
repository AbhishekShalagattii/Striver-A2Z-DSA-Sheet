//Find the nth fibonacci number using recursion 
#include<bits/stdc++.h>
using namespace std;

int findFibo( int n)
{
    if( n <= 1)
    {
        return n;
    }
    return findFibo(n-1) + findFibo(n-2);
}

int main()
{
    int n;
    cin >> n;

    cout << findFibo(n);
}