/**
In the Name of Allah
Author : Mizanur Rahman Hridu
Email  : hridu.hstu@gmail.com
Date   : 05-03-2021
**/

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 1 or n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << fib(n) << endl;
    }

    return 0;
}