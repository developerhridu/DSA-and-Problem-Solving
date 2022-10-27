#include <bits/stdc++.h>
using namespace std;

void print(int *p)
{
    *p = *p + 1;
    p = p + 1;
    cout << *p <<endl;
    cout << p <<endl;
}

int main()
{
    int value = 5;
    int *p = &value;
    
    cout <<"Before "<< p <<endl;
    cout <<"Before "<< *p <<endl;
    print(p);
    cout <<"After "<< p <<endl;
    cout <<"After "<< *p <<endl;
    

    return 0;
}


// Before 0x7ffe45a1e41c
// Before 5
// 1168237597
// 0x7ffe45a1e420
// After 0x7ffe45a1e41c
// After 6