using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProrityQueue
{
    public class Solution
    {
        public int LastStoneWeight(int[] stones)
        {
            if (stones.Length == 1)
            {
                return stones[0];
            }

            

            PriorityQueue<int, int> maxHeap = new PriorityQueue<int, int>(Comparer<int>.Create((a, b) => b.CompareTo(a)));

            foreach (int stone in stones)
            {
                maxHeap.Enqueue(stone, stone);
            }


            while(maxHeap.Count > 0)
            {
                int x = maxHeap.Dequeue();
                int y = maxHeap.Dequeue();

                if (x != y)
                {
                    maxHeap.Enqueue(x - y, x - y);
                }
            }

            return maxHeap.Count == 0 ? 0 : maxHeap.Dequeue();
        }

    }
}
