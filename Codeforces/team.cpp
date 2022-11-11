/**
In the Name of Allah
Author : Mizanur Rahman Hridu
Email  : hridu.hstu@gmail.com
Date   : 04-03-2021
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, Petya, Vasya, Tonya, num(0);
    cin >> n;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            num += 1;
        }
    }
    cout << num << endl;

    return 0;
}