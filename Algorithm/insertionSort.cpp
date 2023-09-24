#include <bits/stdc++.h>
using namespace std;

// function to sort array using insertion Sort
void insertionSort(vector<int> &arr, int n)
{
    int key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// function to print array
void printArray(vector<int> &arr, int n)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    //Taking input for arr
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}