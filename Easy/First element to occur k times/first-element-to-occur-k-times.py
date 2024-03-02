from collections import defaultdict


class Solution:
    def firstElementKTime(self, n, k, a):
        counter = defaultdict(int)
        
        for i in a:
            counter[i] += 1
            if counter[i] == k:
                return i
        
        return -1
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, k = sz[0], sz[1]
        a = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.firstElementKTime(n, k, a))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends