#include<bits/stdc++.h>
using namespace std;

int checkArmStrong(int n)
{
    int sum = 0;
    while(n!=0)
    {
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int num = checkArmStrong(n);

    if(num == n)
    {
        cout << "The Given Number is ArmStrong";
    }else{
        cout << "The Given Number is Not ArmStrong";

    }
}