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
    int n, k, a[50], sum = 0, i;
    scanf("%d%d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1] && a[i] > 0)
            sum++;
    }
    printf("%d\n", sum);
    return 0;

    return 0;
}