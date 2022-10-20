#include <bits/stdc++.h>
using namespace std;
int memorization(int n, vector<int> &lookup)
{

    // Top Down (Memorization)
    // T.C = O(N) S.C = O(N) + O(N)
    if (n <= 1)
    {
        return n;
    }
    if (lookup[n] != -1)
    {
        return lookup[n];
    }
    lookup[n] = memorization(n - 1, lookup) + memorization(n - 2, lookup);
    return lookup[n];
}

int tabular(int n, vector<int> &arr)
{
    // Buttom Up (Tabular)
    // T.C = O(N) S.C = O(N)
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int spacedOptimaztion(int n, vector<int> &arr)
{
    // Space Optimisation
    // T.C = O(N) S.C = O(1)
    int prev1 = 1;
    int prev2 = 0;
    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;

        // shifting Logic
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    cout << spacedOptimaztion(n, arr) << endl;
    cout << tabular(n, arr) << endl;
    cout << memorization(n, arr) << endl;
}