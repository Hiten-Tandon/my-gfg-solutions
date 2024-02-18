//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(const std::string &s, int k){
        std::array<uint32_t, 26> counts;
        counts.fill(0);
        
        for(const char c: s) {
            ++counts[c - 'a'];        
        }
        
        std::priority_queue<uint32_t> pq(counts.begin(), counts.end());
        while(k-->0) {
            uint32_t count = pq.top();
            pq.pop();
            pq.push(count - 1);
        }
        
        int32_t res = 0;
        
        while(!pq.empty()) {
            uint32_t ele = pq.top();
            pq.pop();
            res += ele * ele;
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends