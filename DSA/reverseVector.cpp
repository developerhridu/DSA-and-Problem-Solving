#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 4, 9, 10, -4, 3, 100};
    // reverse vector
    reverse(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u << " ";
    }

    return 0;
}