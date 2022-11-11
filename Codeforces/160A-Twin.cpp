#include <bits/stdc++.h>
using namespace std;

int numberOfCoins(int arr[], int n)
{
}

int main()
{
    int n;
    int sum = 0, sum2 = 0, cnt = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sum = sum / 2;
    sort(arr, arr + n);
    for (int j = n - 1; j >= 0; j--)
    {
        sum2 += arr[j];
        cnt++;
        if (sum < sum2)
            break;
    }
    cout << cnt << endl;

    return 0;
}