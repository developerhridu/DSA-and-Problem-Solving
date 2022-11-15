#include <iostream>
#include <unordered_map>
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> ump;

    for (int i = 0; i < n; i++)
    {
        ump[arr[i]]++;
    }
    for (auto x : ump)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
