//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int32_t arr[], size_t n)
    {
        // Your code goes here
        for(size_t i=0; i < n/2; ++i){
            size_t left = 2 * i + 1;
            size_t right = 2 * i + 2;
            if(
                (left < n && arr[left] > arr[i]) 
                || (right < n && arr[right] > arr[i])
            ) {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends