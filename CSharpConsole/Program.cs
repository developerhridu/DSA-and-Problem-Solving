using System;

class Program
{
    public static void countFreq(int[] arr, int n)
    {
        bool[] visited = new bool[n];
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == true) continue;
            int cnt = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    cnt++;
                    visited[j] = true;
                }
            }
            Console.WriteLine(arr[i] + " " + cnt);
        }

    }
    public static void Main(String[] args)
    {
        int[] arr = new int[] { 10, 20, 20, 10, 10, 20, 5, 20 };
        int n = arr.Length;
        countFreq(arr, n);
    }
}
