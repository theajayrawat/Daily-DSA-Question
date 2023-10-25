// https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1
// T.C : O(N*W)
// S.C : O(N*W)

class Solution{
public:
    //Function to return max value that can be put in knapsack of capacity W.
     int help(int wt[], int val[],int index,int W,vector<vector<int>>&dp){
        if(index<0){
            return 0;
        }
            
        if(dp[index][W]!=-1)
            return dp[index][W];
            
        int include=0;
        if(wt[index]<=W){
           include=val[index]+help(wt,val,index-1,W-wt[index],dp);  
           int repeatInclude=val[index]+help(wt,val,index,W-wt[index],dp);  
           include=max(include,repeatInclude);
        }
            
            
        int exclude=0+help(wt,val,index-1,W,dp);
        
        return dp[index][W]=max(include,exclude);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N,vector<int>(W+1,-1));
       return help(wt,val,N-1,W,dp);
    }
};