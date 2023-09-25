// C++ program for find the largest
// three elements in an array
#include <bits/stdc++.h>
using namespace std;

// Function to print three largest elements
int print3largest(int a[], int n)
{
	

    	// There should be atleast three elements
    	if (n < 3)
    	{
    		
    		return -1;
    	}
    
    	sort(a, a+n, greater<int>());
    
    return a[2];
}

// Driver code
int main()
{
	int arr[] = { 12, 13, 1, 10, 34, 11, 34 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	sort(arr, arr+n, greater<int>());

	for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
	cout << endl;
	int x = print3largest(arr, n);
	cout << x << endl;
	return 0;
}

// This code is contributed by Anjali_Chauhan
