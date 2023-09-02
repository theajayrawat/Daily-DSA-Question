// https://leetcode.com/problems/extra-characters-in-a-string/
// TC: O(N^2)
// SC: O(N)

class Solution {
public:
    
    int solve(string &s, int idx, int n, unordered_set<string>&st, vector<int>&dp) {
        if (idx >= n) 
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        
        string currStr = "";
        int minExtra = INT_MAX;
        
        for (int i = idx; i < s.size(); i++) {
            
            currStr.push_back(s[i]);

            int currExtra = (st.find(currStr) == st.end()) ? currStr.length() : 0;
            int nextExtra = solve(s, i + 1,n,st,dp);
            int totalExtra = currExtra + nextExtra;
            
            minExtra = min(minExtra, totalExtra);
        }
        
        return dp[idx]=minExtra;
    }
    
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
        unordered_set<string>st;
        vector<int>dp(n,-1);
        for(string &word : dictionary) {
            st.insert(word);
        }
        
        return solve(s, 0,n,st,dp);
    }
};