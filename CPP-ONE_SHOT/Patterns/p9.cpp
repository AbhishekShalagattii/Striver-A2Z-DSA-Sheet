#include <bits/stdc++.h>
using namespace std;

void printPattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "- ";
        }
        // star
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << "- ";
        }

        // star
        for (int j = 0; j < (((n - i) * 2) - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        printPattern7(n);
        printPattern8(n);

    }
}