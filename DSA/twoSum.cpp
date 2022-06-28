#include <bits/stdc++.h>
using namespace std;
bool twoSum(int arr[], int n, int sum)
{
    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + arr[j] == sum)
            return true;
        else if (arr[j] + arr[i] > sum)
        {
            j--;
        }
        else
            i++;
    }
    return false;
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
    int sum;
    cin >> sum;
    cout << twoSum(arr, n, sum) << endl;

    return 0;
}