// //Check if a given string is Palindrome or not
// #include<bits/stdc++.h>
// using namespace std;

// bool checkPalindrome(int i,const string &s,int n)
// {
//     if(i >= n/2)
//     {
//         return true;
//     }
//     if(s[i] != s[n-i-1])
//     {
//         return false;
//     }
//     return checkPalindrome(i+1,s,n);
// }

// int main()
// {
//     string s;
//     cin >> s;
//     int n = s.size();

//     bool res = checkPalindrome(0,s,n);
//     cout << boolalpha << res << endl;

// }

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    string str;
    for (int i = 0; i < s.size(); i++)
    {
        if (isalnum(s[i]))
        {
            str += tolower(s[i]);
        }
    }

    int left = 0;
    int right = str.size() - 1;
    bool ans = true;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << checkPalindrome(s);
}
