//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    uint64_t countSubstring(const std::string &s){
        uint64_t res = 0;
        int32_t diff_btw_c1_nd_c0 = 0;
        int32_t prev_sum = 0;
        std::unordered_map<int32_t, uint64_t> mp;
        mp[0] = 1;
        
        for(char c: s) {
            if(c == '0') {
                diff_btw_c1_nd_c0--;
                prev_sum -= mp[diff_btw_c1_nd_c0];
            } else {
                prev_sum += mp[diff_btw_c1_nd_c0];
                diff_btw_c1_nd_c0++;
            }
            
            mp[diff_btw_c1_nd_c0]++;
            res += prev_sum;
        }
        
        return res;
    }
};


//{ Driver Code Starts.
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    string S;
    cin>>S;
    Solution obj;
    long long ans =obj.countSubstring(S);
    cout<<ans<<endl;
 }
}
// } Driver Code Ends