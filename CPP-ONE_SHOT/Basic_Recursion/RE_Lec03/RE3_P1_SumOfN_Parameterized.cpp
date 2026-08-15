#include<bits/stdc++.h>
using namespace std;

void printSumOfN(int n, int sum)
{
    if( n <= 0)
    {
        cout << sum ;
        return;
    }
    printSumOfN(n - 1, sum + n);
}

int main()
{
    int n;
    cin >> n;

    int sum = 0;


    printSumOfN(n,sum);
}