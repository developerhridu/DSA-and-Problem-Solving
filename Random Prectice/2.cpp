#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v, int left, int right, int key)
{
    if (right >= left)
    {
        int mid = left + (right - 1) / 2;
        if (v[mid] == key)
            return mid;
        if (v[mid] < key)
            return binarySearch(v, mid + 1, right, key);
        return binarySearch(v, 0, mid - 1, key);
    }
    return -1;
}

int main()
{
    int n, key, a;
    cin >> n >> key;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {

        cin >> a;
        v.push_back(a);
    }

    cout << binarySearch(v, 0, n, key) << endl;

    return 0;
}