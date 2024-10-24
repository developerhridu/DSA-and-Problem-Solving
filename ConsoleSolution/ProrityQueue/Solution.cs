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

            int result = 0;

            PriorityQueue<int, int> maxHeap = new PriorityQueue<int, int>(Comparer<int>.Create((a, b) => b.CompareTo(a)));

            foreach (int stone in stones)
            {
                maxHeap.Enqueue(stone, stone);
            }


            return result;
        }

    }
}
