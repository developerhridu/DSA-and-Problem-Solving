#include <bits/stdc++.h>
using namespace std;

void sortVector()
{
    vector<int> v = {5, 4, 9, 10, -4, 3, 100};

    //Sort Smaller to Greater
    sort(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << endl;

    // Greater to smaller
    sort(v.begin(), v.end(), greater<int>());
    for (auto u : v)
    {
        cout << u << " ";
    }

    // Greater to smaller
    cout << endl;

    sort(v.rbegin(), v.rend());
    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << endl;

    // reverse vector
    reverse(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u << " ";
    }
}
int main()
{
    sortVector();
    return 0;
}