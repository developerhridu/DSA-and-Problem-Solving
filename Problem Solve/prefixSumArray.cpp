#include <iostream>
using namespace std;

void prefixSumArray(int arr[], int n)
{
    int sumArr[n];
    sumArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        sumArr[i] = sumArr[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << sumArr[i] << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        prefixSumArray(arr, n);
    }

    return 0;
}