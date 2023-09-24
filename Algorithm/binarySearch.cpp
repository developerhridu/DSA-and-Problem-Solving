#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return true;
        if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    // Taking input for arr
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    // printing sorted array
    for (auto it : arr)
        cout << it << " ";
    cout << endl;

    int a;
    cin >> a; // staring point from whare search will appear

    int b;
    cin >> b; // ending point from whare search will end

    for (int i = a; i <= b; i++)
    {
        if (binarySearch(arr, i))
        {
            cout << i << " ";
        }
    }

    return 0;
}