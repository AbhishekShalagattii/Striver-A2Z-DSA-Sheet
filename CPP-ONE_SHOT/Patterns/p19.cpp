#include<bits/stdc++.h>
using namespace std;


void printPattern19A( int n)
{
    for( int i = 1; i <= n; i++ )
    {
        //stars:
        for( int j = 1; j <= n-i+1; j++)
        {
            cout << "* ";
        }
        //space:
        for( int k = 1; k <= 2*(i-1); k++)
        {
            cout << "  ";
        }
        //stars:
        for( int j = 1; j <= n-i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printPattern19B( int n)
{
    for( int i = 1; i <= n; i++)
    {
        //stars
        for( int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        //space
        for( int k = 1; k <= 2*(n-i); k++)
        {
            cout << "  ";
        }
        //stars
        for( int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;

    }
}

int main()
{
    int n;
    cin >> n;

    printPattern19A(n);
    printPattern19B(n);
    return 0;
}