//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// str : given string to search
// words : vector of available strings

class Solution
{
public:
    int wordBreak(const std::string &str, const std::vector<std::string> &words) {
        size_t n = str.size();
        vector<int>dp(n+1,0);
        dp[0] = 1;
        for(int i = 1;i<=n;i++){
            for(int j = 0;j<i;j++){
                if(dp[j] && find(words.begin(),words.end(),str.substr(j,i-j))!=words.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends