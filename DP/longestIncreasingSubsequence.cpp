#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        int max = 0;

        // taking a array of n size and initializing it with 1
        vector<int> lis(n, 1);
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j] && lis[i] < lis[j] + 1)
                {
                    lis[i] = lis[j] + 1;
                }
            }
        }
        // piching the maximum value of lis array
        for (int i = 0; i < n; i++)
        {
            if (max < lis[i])
            {
                max = lis[i];
            }
        }
        return max;
    }
};

//{ Driver Code Starts.
int main()
{
    // taking total testcases
    int t, n;
    cin >> t;
    while (t--)
    {
        // taking size of array
        cin >> n;
        int a[n];

        // inserting elements to the array
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        // calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
