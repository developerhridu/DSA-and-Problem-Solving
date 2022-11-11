#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int cnt = 0;
    getline(cin, s);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '{}' || s[i] == ',' || s[i] == ' ')
        {
            continue;
        }
        else
        {
            if (s[i] != s[i + 1])
            {
                cnt++;
            }
        }
    }
    cout << cnt - 1 << endl;

    return 0;
}