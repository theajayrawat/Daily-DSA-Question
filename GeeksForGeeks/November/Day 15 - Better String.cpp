// https://www.geeksforgeeks.org/problems/better-string/1
// TC: O(N) 
// SC: O(N) 

class Solution {
  public:
    int distinctSubsequences(string s){
	    // Your code goes here'
	    int n=s.size();
	    vector<int>prevChar(26,-1);
	    vector<int>dp(n+1);
	    dp[0] = 1;
	    
	    for(int i=1;i<=n;i++){
	        dp[i]=2*dp[i-1];
	        int index=s[i-1]-'a';
	        
	        if(prevChar[index]!=-1){
	           dp[i]=dp[i]-dp[prevChar[index]];
	        }
	        
	        prevChar[index]=(i - 1);
	    }
	    
	    return dp[n];
	    
	}
    string betterString(string str1, string str2) {
        // code here
        int s1=distinctSubsequences(str1);
        int s2=distinctSubsequences(str2);
        
        return s1<s2?str2:str1;
            
       
    }
};

