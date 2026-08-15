// Braking the Pattern and then making the logic 
// #include<bits/stdc++.h>
// using namespace std;

// void printPattern12A( int n)
// {
//     for( int i = 1; i <= n; i++)
//     {
//         //Numbers 
//         for( int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         //Spaces
//         for ( int k = 0; k < n - i; k++)
//         {
//             cout << "_ ";
//         }
//         cout << endl;
//     }
// }

// void printPattern12B( int n)
// {
//     for(int i = 1; i <= n; i++)
//     {
//     //space 
//         for( int j = 0; j < n-i; j++)
//         {
//             cout << "- ";
//         }
//     //Numbers
//         int num = i;
//         for( int k = 0; k < (2*i)-i; k++)
//         {
//             cout << num << " ";
//             num = num - 1;
//         }
//         cout << endl;
//     }

// }

// int main()
// {
//     int n ;
//     cin >> n;

//     printPattern12A( n);
//     printPattern12B( n);

// }

//Complete logic for the pattern without braking the pattern

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for( int i = 1; i <= n; i++)
    {
        //Numbers
        for( int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        //Space
        for( int k = 1; k <= (2*n)-(2*i); k++)
        {
            cout << "- ";
        }

        int num = i;
        //Numbers
        for( int l = 1; l <= i; l++)
        {
            cout << num << " ";
            num = num - 1;
        }
        cout << endl;
    }
}