#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "- ";
        }

        // Alphabets
        char ch = 'A';
        int alphs = (2 * i) - 1;
        for (int k = 1; k <= alphs; k++)
        {
            cout << ch << " ";
            if (k < i)
            {
                ch++;
            }
            else{
                ch = ch - 1;
            }
        }

        // space
        for (int l = 1; l <= n - i; l++)
        {
            cout << "- ";
        }

        cout << endl;
    }
}