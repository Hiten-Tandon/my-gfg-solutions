//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
private:
    void helper(
        std::vector<std::string> &container,
        const std::string &pref,
        const std::string &str,
        size_t pos
    ) {
        if(pos == str.size()) {
            if(pref.size() != 0) {
                container.push_back(pref);
            }
            return;
        }
        
        helper(container, pref, str, pos + 1);
        helper(container, pref + str[pos], str, pos + 1);
    }
public:
	vector<string> AllPossibleStrings(std::string &s){
	    std::vector<std::string> res;
	    helper(res, "", s, 0);
	    std::sort(res.begin(), res.end());
	    return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends