#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;

    for( int i = 0; i < row; i++){
    int num = 1;

        for( int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

}