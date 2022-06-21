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
    int i, n, t, k, w;
    long long sum = 0;

    cin >> k >> n >> w;
    for (i = 1; i <= w; i++)
    {
        sum = sum + (i * k);
    }
    if (sum <= n)
    {
        cout << 0 << "\n";
    }
    else
        cout << sum - n << "\n";

    return 0;
}