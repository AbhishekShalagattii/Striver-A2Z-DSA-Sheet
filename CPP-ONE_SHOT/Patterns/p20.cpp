#include<bits/stdc++.h>
using namespace std;

void printPattern20( int n)
{
    int spaces = 2*n-2;
    for( int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if( i > n ) stars = 2*n-i;
        //stars
        for( int j = 1; j <= stars; j++ )
        {
            cout << "* ";
        }
        //spaces
        for( int k = 1; k <= spaces; k++ )
        {
            cout << "  ";
        }
        //stars
        for( int l = 1; l <= stars; l++ )
        {
            cout << "* ";
        }
        cout << endl;
        if( i < n ) spaces -= 2;
        else spaces +=2;

    }
}

int main(){
    int n;
    cin >> n;
    printPattern20(n);
}