#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    // Edge case
    if (n < k)
    {
        cout << "Invalid";
        return -1;
    }
    // Intialization of maxSum to sum of first k elements
    int maxSum = 0;
    for (int i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }
    // Compute sums of remaining windows
    int currentSum = maxSum;
    for (int i = k; i < n; i++)
    {
        currentSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxSum(arr, n, k) << endl;

    return 0;
}