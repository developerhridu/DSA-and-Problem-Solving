/**
Bismillahir Rahmanir Raheem
Author : Mizanur Rahman Hridu
Email  : hridu.hstu@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

void numberOfBills(int &n)
{
    int m = 0;
    if (n / 100)
    {
        m += (n / 100), n -= (n / 100) * 100;
    }
    if (n / 20)
    {
        m += (n / 20), n -= (n / 20) * 20;
    }
    if (n / 10)
    {
        m += (n / 10), n -= (n / 10) * 10;
    }
    if (n / 5)
    {
        m += (n / 5), n -= (n / 5) * 5;
    }
    m += n;
    cout << m << endl;
}
int main()
{
    int n;
    cin >> n;
    numberOfBills(n);

    return 0;
}