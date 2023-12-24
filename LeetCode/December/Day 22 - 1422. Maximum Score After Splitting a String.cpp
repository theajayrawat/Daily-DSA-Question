// https://leetcode.com/problems/maximum-score-after-splitting-a-string/
// TC: O(N)
// SC: O(1)

class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int count=0;
       for(int i=0;i<n;i++){
           if(s[i]=='0')count++;
       }

        int ans=0;
        int left=0;    
       for(int i=0;i<n-1;i++){
           if(s[i]=='0'){
               left++;
           }
            ans=max(ans,(left+n-(count-left)-i-1));
       }

       return ans;
    }
};

