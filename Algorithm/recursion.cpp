/**
In the Name of Allah
Author : Mizanur Rahman Hridu
Email  : hridu.hstu@gmail.com
Date   : 05-03-2021
**/

#include <bits/stdc++.h>
using namespace std;

void f(int x)
{
    if (x == 0)
        return;
    --x;
    cout << x << endl;
    f(x);
    cout << x << endl;
}

int main()
{
    f(3);

    return 0;
}

/* Output
2
1
0
0
1
2
*/