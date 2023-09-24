#include <bits/stdc++.h>
using namespace std;

void indianSummer()
{
    int n;
    cin >> n;
    vector<pair<string, string>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    int un = unique(v.begin(), v.end()) - v.begin();
    cout << un << endl;
}

int main()
{

    indianSummer();

    return 0;
}