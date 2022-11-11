/**
Bismillahir Rahmanir Raheem
Author : Mizanur Rahman Hridu
Email  : hridu.hstu@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0);
    string s, t;
    cin >> s >> t;

    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}