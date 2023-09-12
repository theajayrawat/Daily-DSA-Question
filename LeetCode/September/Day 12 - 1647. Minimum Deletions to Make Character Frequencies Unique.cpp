// https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/
// TC: O(N)
// SC: O(N)

class Solution {
public:  
    int minDeletions(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        int ans = 0;
        unordered_set<int> st;
        for (int i = 0; i < 26; i++) {
            while (freq[i] && st.find(freq[i]) != st.end()) {
                freq[i]--;
                ans++;
            }
            st.insert(freq[i]);
        }
        
        return ans;
          
    }
};