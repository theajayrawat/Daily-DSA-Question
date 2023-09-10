// https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/
// TC: O(N)
// SC: O(N)

class Solution {
public:
    int countOrders(int n) {
        vector<long>dp(501,0);
        long mod =1e9 + 7;
        dp[1]=1;
        for (int i=2;i<=n;i++) {
            int odddNo = 2 * i -1;
            int permutations = odddNo * (odddNo+1)/2;
            dp[i] = ((dp[i-1]%mod)*(permutations%mod))%mod;
        }
        return dp[n];
    }
};