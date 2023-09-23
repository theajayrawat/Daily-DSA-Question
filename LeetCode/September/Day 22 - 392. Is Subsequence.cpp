// https://leetcode.com/problems/is-subsequence/
// TC: O(N)
// SC: O(1)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int j=0;
        if(n==0 && m==0)
            return true;
        if(n==0 && m!=0)
            return true;
        if(n>m)
            return false;
            
        for(int i=0;i<m;i++){
            if(s[j]==t[i]){
                j++;
                if(j==n)
                    return true;
            }
        }

        return false;
    }
};