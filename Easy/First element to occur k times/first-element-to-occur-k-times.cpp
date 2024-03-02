//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int32_t firstElementKTime(size_t n, uint32_t k, int32_t a[]){
        std::unordered_map<int32_t, uint32_t> counter;
        
        for(size_t i = 0; i < n; ++i) {
            counter[a[i]]++;
            if(counter[a[i]] == k) {
                return a[i];
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(n, k, a)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends