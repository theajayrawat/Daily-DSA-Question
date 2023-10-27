// https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1
// T.C : O(N*N)
// S.C : O(N*N)

class Solution{
  public:
    int longestPalinSubseq(string A)
    {
        // code here
        string rev = A;
        reverse(rev.begin(), rev.end());
        int n = A.length(), m = rev.length();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;

                else if (rev[i - 1] == A[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];

                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
        return dp[n][m];
    }
    int minimumNumberOfDeletions(string S) { 
        // code here
        int cnt=0;
        return S.size()-longestPalinSubseq(S);
        
    } 
};

