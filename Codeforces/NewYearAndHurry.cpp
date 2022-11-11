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
    int n, k, i, sum, res, c;

    while (cin >> n >> k)
    {
        res = 240 - k, sum = 0, c = 0;

        for (i = 1; i <= n; i++)
        {
            sum += 5 * i;

            if (sum > res)
                break;

            c = c + 1;
        }

        cout << c << endl;
    }

    return 0;
}