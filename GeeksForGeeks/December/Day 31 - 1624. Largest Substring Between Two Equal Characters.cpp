// https://leetcode.com/problems/largest-substring-between-two-equal-characters/description/
// TC: O(N*(Sum of coins))
// SC: O(N*(Sum of coins))

class Solution {
    
    public:
    vector<vector<int>>dp;
    int solve(int idx,int N,int coins[],int sum){
        if(idx==N){
            if(sum>0 && (sum%20==0 || sum%24==0 || sum==2024)) 
                return true;
            else 
                return false;
         }
        
        if(dp[idx][sum]!=-1) 
            return dp[idx][sum];
        
        return dp[idx][sum]=solve(idx+1,N,coins,sum) || solve(idx+1,N,coins,sum+coins[idx]);
    }
    int isPossible(int N , int coins[]) 
    {
        dp.resize(N,vector<int>(2025,-1));
        return solve(0,N,coins,0);
    }
    
};

