from functools import cmp_to_key

class Solution:
    def comp(self, a, b):
        if a + b > b + a:
            return -1
        return 1

	def printLargest(self, n, arr):
        arr = sorted(arr, key=cmp_to_key(self.comp))
        largest_number = "".join(arr)
        return largest_number



#{ 
 # Driver Code Starts
#Initial Template for Python 3

import functools

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(str, input().strip().split()))
        ob = Solution()
        ans = ob.printLargest(n, arr)
        print(ans)
        tc -= 1

# } Driver Code Ends