/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int q = 4;

    for( int i = 0; i < n; i++  ){
        for ( int j = 0; j < q; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}*/

// Do the code as if in a online compiler
#include<bits/stdc++.h>
using namespace std;

void printPattern( int n )
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t;i++)
    {
        int n;
        cin >> n;
        printPattern(n);
    }
}