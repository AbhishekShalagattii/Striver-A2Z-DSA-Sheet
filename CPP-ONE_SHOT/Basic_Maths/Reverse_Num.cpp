#include<bits/stdc++.h>
using namespace std;

int reverseNum( int n)
{
    int rev = 0;
    int dup = n;

    while(n != 0)
    {
        int lstdigit = n % 10;

        if( rev >= INT32_MAX / 10 || rev <= INT32_MIN)
            return 0;


        rev = (rev * 10) + lstdigit;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;

    int num = reverseNum(n);
    cout << num;
}