// https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1
// TC: O(N)
// SC: O(N)

class Solution
{
public:
    // Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {

        // your code here
        long long m = 1000000007;
        vector<long long> dp(n, 0);
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 4;

        for (int i = 3; i < n; i++)
        {
            dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % m;
        }

        return dp[n - 1];
    }
};
