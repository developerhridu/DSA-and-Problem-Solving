#include <bits/stdc++.h>
using namespace std;

bool isSubString(string &str, string &substr)
{
    for (int i = 0; i <= str.size() - substr.size(); i++)
    {
        string s = str.substr(i, substr.size());
        if (s == substr)
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
        string str, substr;
        cin >> str >> substr;
        cout << (isSubString(str, substr) ? "YES" : "NO") << endl;
    }

    return 0;
}