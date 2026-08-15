//Count the frequency of a char in a given string
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    //Precompute
    int charHas[26] = {0};
    for( int i = 0; i < s.size(); i++)
    {
        charHas[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        cout << charHas[ch - 'a'] << " ";
    }
    

}