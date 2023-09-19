// C# program to implement delete
// operation in an unsorted array
using System;

class main {
	// Function to search a
	// key to be deleted
	static int findElement(int[] arr, int n, int key)
	{

		int i;
		for (i = 0; i < n; i++)
			if (arr[i] == key)
				return i;

		return -1;
	}

	// Function to delete an element
	static int deleteElement(int[] arr, int n, int key)
	{
		// Find position of element
		// to be deleted
		int pos = findElement(arr, n, key);

		if (pos == -1) {
			Console.WriteLine("Element not found");
			return n;
		}

		// Deleting element
		int i;
		for (i = pos; i < n - 1; i++)
			arr[i] = arr[i + 1];

		return n - 1;
	}

	// Driver Code
	public static void Main()
	{
		int i;
		int[] arr = { 10, 50, 30, 40, 20 };

		int n = arr.Length;
		int key = 30;

		Console.Write("Array before deletion ");
		for (i = 0; i < n; i++)
			Console.Write(arr[i] + " ");
		Console.WriteLine();

		// Function call
		n = deleteElement(arr, n, key);

		Console.Write("Array after deletion ");
		for (i = 0; i < n; i++)
			Console.Write(arr[i] + " ");
	}
}

// This code is contributed by vt_m.
