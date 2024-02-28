#User function Template for python3

class Solution:
    def DivisibleByEight(self, s: str) -> int:
        return 1 if int(s[max(0, len(s) - 3):]) % 8 == 0 else -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        S=input()
        ob=Solution()
        print(ob.DivisibleByEight(S))
# } Driver Code Ends