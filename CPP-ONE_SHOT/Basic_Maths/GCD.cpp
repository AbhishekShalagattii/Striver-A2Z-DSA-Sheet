#include<bits/stdc++.h>
using namespace std;


//Brute Force Approach
// int getGcd( int a,int b)
// {
//     int gcd = 1;
//     for(int i = 1; i <= min(a,b); i++)
//     {
//         if( a % i == 0 && b % i == 0)
//         {
//             gcd = i;
//         }
//     }
//     return gcd;
// }

//Optimized Approach no 2

int getGcd( int a , int b)
{
    int rem;
    while(b != 0)
    {
        rem = a % b ;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a,b;
    cin >> a >> b;

    int gcd = getGcd(a,b);
    cout << gcd << endl ;

    //optimized Approach no 1
    // while( a > 0 && b > 0)
    // {
    //     if(a > b){
    //         a = a % b;
    //     }else{
    //         b = b % a;
    //     }
    // }
    // if(a == 0) cout << b;
    // cout << a;


}