// https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1
// TC: O(N*sum)
// SC: O(N*sum)

class Solution
{

public:
    int mod = 1e9 + 7;

    int solve(int sum, int n, int arr[], vector<vector<int>> &dp)
    {
        if (n < 0 || sum < 0)
            return sum == 0;
        if (dp[n][sum] != -1)
            return dp[n][sum];

        int pick = solve(sum - arr[n], n - 1, arr, dp);
        int notPick = solve(sum, n - 1, arr, dp);

        return dp[n][sum] = (pick + notPick) % mod;
    }

    int perfectSum(int arr[], int n, int sum)
    {
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        return solve(sum, n - 1, arr, dp);
    }
};
