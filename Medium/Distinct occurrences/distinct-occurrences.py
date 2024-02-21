from typing import List

_MOD = 10**9 + 7

def _rec(s: str, t: str, s_pos: int, t_pos: int, dp: List[List[int]]) -> int:
    if t_pos == len(t):
        return 1
    
    if s_pos == len(s):
        return 0
    
    if dp[s_pos][t_pos] == -1:
        dp[s_pos][t_pos] = _rec(s, t, s_pos + 1, t_pos, dp)
        if s[s_pos] == t[t_pos]:
            dp[s_pos][t_pos] += _rec(s, t, s_pos + 1, t_pos + 1, dp)
        dp[s_pos][t_pos] %= _MOD
    
    
    return dp[s_pos][t_pos]
    
class Solution:
    def sequenceCount(self, s: str, t: str) -> int:
        dp = [[-1] * len(t) for _ in s]
        return _rec(s, t, 0, 0, dp)

#{ 
 # Driver Code Starts
#Initial template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        arr = input().strip().split()
        print(Solution().sequenceCount(str(arr[0]), str(arr[1])))
# } Driver Code Ends