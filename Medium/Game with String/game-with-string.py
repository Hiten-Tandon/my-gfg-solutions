from collections import Counter
import heapq
class Solution:
    def minValue(self, s: str, k: int) -> int:
        counts = list(-x for x in Counter(s).values())
        
        heapq.heapify(counts)
        
        while k != 0:
            k -= 1
            heapq.heappush(counts, heapq.heappop(counts) + 1)
        
        return sum(x * x for x in counts)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        k = int(input())
        
        ob = Solution()
        print(ob.minValue(s, k))
# } Driver Code Ends