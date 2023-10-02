// https://practice.geeksforgeeks.org/problems/number-of-distinct-subsequences0909/1
// TC: O(N)
// SC: O(N)


class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here'
	    int n=s.size();
	    long long m=1e9+7;
	    vector<int>prevChar(26,-1);
	    vector<long long>dp(n+1);
	    dp[0] = 1;
	    
	    for(int i=1;i<=n;i++){
	        dp[i]=(2*dp[i-1])%m;
	        int index=s[i-1]-'a';
	        
	        if(prevChar[index]!=-1){
	           dp[i]=(dp[i]-dp[prevChar[index]])%m;
	        }
	        
	        prevChar[index]=(i - 1);
	    }
	    
	    return (int)(dp[n]<0?dp[n]+m:dp[n]);
	    
	}
};