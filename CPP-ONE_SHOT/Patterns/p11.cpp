#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int num = 1;

    for( int i = 0 ; i < n; i++)
    {
        int num;
        if(i % 2 == 0)
        {
            num = 1;
        }
        else{ num = 0;}
        for( int j = 0; j < i+1; j++)
        {
            cout << num << " ";
            num = 1 - num; // for toggling the value from o -> 1, 1 -> 0
        }
        cout << endl;
    }

}