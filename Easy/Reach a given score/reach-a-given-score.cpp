//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int64_t count(int64_t n){
        if(n < 3) {
            return 0;
        }
        
        std::vector<int64_t> dp(n + 1, 0);
        dp[0] = 1;
        for(size_t i = 3; i <= n; ++i) {
            dp[i] += dp[i - 3];
        }
        
        for(size_t i = 5; i <= n; ++i) {
            dp[i] += dp[i - 5];
        }
        
        for(size_t i = 10; i <= n; ++i) {
            dp[i] += dp[i - 10];
        }
        
        return dp.back();
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends