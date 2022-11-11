// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>

// } Driver Code Ends
//User function Template for C

int isPlaindrome(char S[])
{
    // Your code goes here

    int n = strlen(S) - 1;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        if (S[i] != S[n - i])
        {
            return 0;
        }
    }
    return 1;
}

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100000];
        scanf("%s", &s);

        printf("%d\n", isPlaindrome(s));
    }

    return 0;
} // } Driver Code Ends