#include <bits/stdc++.h>
using namespace std;
void prefixSum(int arr[], int n)
{
    int prefixsum[n];
    prefixsum[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << prefixsum[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    prefixSum(arr, n);

    return 0;
}