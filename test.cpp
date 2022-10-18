#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);

    for (int i : dq)
    {
        cout << i << " ";
    }

    return 0;
}