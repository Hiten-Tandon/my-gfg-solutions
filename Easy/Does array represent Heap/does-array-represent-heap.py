import heapq
class Solution:
    def isMaxHeap(self,arr,n):
        for i in range(len(arr)//2):
            left = 2 * i + 1
            right = 2 * i + 2
            
            if (left < len(arr) and arr[left] > arr[i])\
                or (right < len(arr) and arr[right] > arr[i]):
                return False
        
        return True
                

#{ 
 # Driver Code Starts
if __name__ =='__main__':
    t= int(input())
    for tcs in range(t):
        n=int(input())
        arr=[int(x) for x in input().split()]
        ob=Solution()
        print(int(ob.isMaxHeap(arr,n)))
# } Driver Code Ends