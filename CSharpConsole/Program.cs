using System;

class Program
{
    static void Main()
    {
        int[] originalArray = { 1, 2, 3, 4, 5 };

        // Using inbuilt method in C#
        Array.Reverse(originalArray);

        // Print the reversed array
        foreach (int num in originalArray)
        {
            Console.Write(num + " ");
        }
    }
}
