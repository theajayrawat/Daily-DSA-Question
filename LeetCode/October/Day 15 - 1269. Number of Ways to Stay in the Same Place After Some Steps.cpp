// https://leetcode.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/
// T.C : O(steps * min(steps, arrLen))
// S.C : O(steps * min(steps, arrLen))

class Solution {
public:
    int MOD = 1e9+7;
    int solve(int steps, int arrLen, int index, vector<vector<int>>&dp){
        if(index < 0 || index >= arrLen)
            return 0;
        if(steps==0){
            return index==0;
        }
        if(dp[steps][index]!=-1)
            return dp[steps][index];
            
        int ans=solve(steps-1,arrLen,index-1,dp)%MOD;
        ans= (ans+solve(steps-1,arrLen,index+1,dp))%MOD;
        ans= (ans+solve(steps-1,arrLen,index,dp))%MOD;

        return dp[steps][index]=ans;

    }
    int numWays(int steps, int arrLen) {
        arrLen = min(arrLen, steps);
        vector<vector<int>>dp(steps+1,vector<int>(arrLen+1,-1));
        return solve(steps,arrLen,0,dp);
    }
};