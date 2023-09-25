// C++ program for find the largest
// three elements in an array
#include <bits/stdc++.h>
using namespace std;

// Function to print three largest elements
void print3largest(int a[], int a_size)
{
	int first, second, third;

	// There should be atleast three elements
	if (a_size < 3)
	{
		cout << " Invalid Input ";
		return;
	}

	third = first = second = INT_MIN;
	for(int i = 0; i < a_size; i++)
	{
		
		// If current element is
		// greater than first
		if (a[i] > first)
		{
			third = second;
			second = first;
			first = a[i];
		}

		// If a[i] is in between first
		// and second then update second
		else if (a[i] > second && a[i] != first)
		{
			third = second;
			second = a[i];
		}

		else if (a[i] > third && a[i] != second && a[i] != first)
			third = a[i];
	}

	return third;
}

// Driver code
int main()
{
	int a[] = { 12, 13, 1, 10, 34, 11, 34 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	print3largest(arr, n);
	return 0;
}

// This code is contributed by Anjali_Chauhan
