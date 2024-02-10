
// Iterative C# program to reverse an 
// array 
using System;

class GFG
{

    /* Function to reverse arr[] from 
	start to end*/
    static void rvereseArray(int[] arr,
                    int start, int end)
    {
        int temp;

        while (start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    /* Utility that prints out an 
	array on a line */
    static void printArray(int[] arr,
                            int size)
    {
        for (int i = 0; i < size; i++)
            Console.Write(arr[i] + " ");

        Console.WriteLine();
    }

    // Driver function 
    public static void Main()
    {
        int[] arr = { 1, 2, 3, 4, 5, 6 };
        printArray(arr, 6);
        rvereseArray(arr, 0, 5);
        Console.Write("Reversed array is \n");
        printArray(arr, 6);
    }
}

// This code is contributed by Sam007 
