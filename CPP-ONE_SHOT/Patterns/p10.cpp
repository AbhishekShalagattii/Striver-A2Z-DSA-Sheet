#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    for( int i = 0; i < ((2*n)-1); i++)
    {
        int stars = i+1;
        if(i>=n) stars = 2*n-i-1;
        for(int j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}