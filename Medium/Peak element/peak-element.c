//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>


// } Driver Code Ends
//User function Template for C
#include<inttypes.h>
unsigned long long int peakElement(int *const arr, unsigned long long int arr_len)
{
   unsigned long long int left = 0;
   unsigned long long int right = arr_len;
   
   while(left < right) {
       unsigned long long int mid = left + (right - left) / 2;
       
       if(mid == arr_len - 1 || arr[mid] > arr[mid + 1]) {
           right = mid;
       } else {
           left = mid + 1;
       }
   }
   
   
   return left;
}

//{ Driver Code Starts.

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
			tmp[i] = a[i];
		}
		bool f=0;
		
		int A = peakElement(tmp,n);
		
		if(A<0 && A>=n)
		    printf("0\n");
		else
		{
    		if(n==1 && A==0)
    		    f=1;
    		else if(A==0 && a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 && a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] && a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		printf("%d\n", f);
		}
		
	}

	return 0;
}
// } Driver Code Ends