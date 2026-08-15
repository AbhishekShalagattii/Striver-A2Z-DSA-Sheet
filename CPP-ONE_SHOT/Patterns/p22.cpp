// Zero based Indexing 
/*#include<bits/stdc++.h>
using namespace std;

void printPattern22( int n)
{
    for( int i = 0; i < (2*n)-1; i++ )
    {
        for( int j = 0; j < (2*n)-1; j++ )
        {
            int top = i;
            int left = j;
            int right = 2*n-2-j;
            int bottom = 2*n-2-i;
            cout << (n - min( min(top,bottom), min(left,right)));
        }
        cout << endl;
        
    }
}

int main()
{
    int n;
    cin >> n;

    printPattern22(n);
}*/

// One based Indexing 

#include<bits/stdc++.h>
using namespace std;

void printPattern22( int n)
{
    for( int i = 1; i <= (2*n)-1; i++ )
    {
        for( int j = 1; j <= (2*n)-1; j++)
        {
            int top = i-1;
            int left = j-1;
            int right = 2*n-1-j;
            int bottom = 2*n-1-i;

            cout << (n - min(min(top,bottom),min(left,right)));
        }
        cout << endl;
    } 
}

int main()
{
    int n;
    cin >> n;

    printPattern22(n);
}
