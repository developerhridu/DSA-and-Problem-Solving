#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < str.size() - 1; j++) // last index will be check in if statement that's why for size is reduced by 1
        {
            if (str[j] == 'B' && str[j + 1] == 'G')
            {
                str[j] = 'G';
                str[j + 1] = 'B';
                j++; // need to check 2 positions later
            }
        }
    }
    cout << str << endl;

    return 0;
}