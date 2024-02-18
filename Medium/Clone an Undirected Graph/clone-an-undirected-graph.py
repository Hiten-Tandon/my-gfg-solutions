from typing import Optional, Dict


class Solution():
    def __init__(self):
        self.mp = {}
        
    def cloneGraph(
        self, 
        node: Optional['Node'] 
    ) -> Optional['Node']:
        if node is None:
            return None
        
        if node.val not in self.mp:
            self.mp[node.val] = Node(node.val, [])
            for neighbor in node.neighbors:
                self.mp[node.val].neighbors.append(self.cloneGraph(neighbor))
        
        return self.mp[node.val]



#{ 
 # Driver Code Starts
#Initial Template for Python 3

from queue import Queue
class Node:
    def __init__(self, val = 0, neighbors = []):
        self.val = val
        self.neighbors = neighbors
import sys
sys.setrecursionlimit(10**6)
def compare(prev, new, prev_vis = set(), new_vis = set()):
    if prev==new:
        return False
    if not prev or not new:
        if (not prev and new) or (prev and not new):
            return False
        return True
    
    if prev in prev_vis or new in new_vis:
        if (prev in prev_vis and new not in new_vis) or (prev not in prev_vis and new in new_vis):
            return False
        return True
    prev_vis.add(prev)
    new_vis.add(new)
    
    if prev.val != new.val:
        return False
    
    prev_n = len(prev.neighbors)
    new_n = len(prev.neighbors)
    if prev_n != new_n:
        return False

    prev.neighbors.sort(key=lambda x:x.val)
    new.neighbors.sort(key=lambda x:x.val)
    for i in range(prev_n):
        if not compare(prev.neighbors[i], new.neighbors[i], prev_vis, new_vis):
            return False
    
    return True

    
    
if __name__ == "__main__":
    for _ in range(int(input())):
        N = int(input())
        v = [Node(i) for i in range(N)]
        for i in range(N):
            v[i].neighbors = [v[int(i)] for i in input().split()]
        ob = Solution()
        ans = ob.cloneGraph(v[0])
        # if ans == v[0]:
        #     print(0)
        print(int(compare(v[0], ans)))
# } Driver Code Ends