#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string &s1, string &s2)
{
    for (int i = 0; i <= s1.size() - s2.size(); i++)
    {
        string sub_str = s1.substr(i, s2.size());
        if (sub_str == s2)
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << isSubstring(s1, s2) << endl;
    }

    return 0;
}