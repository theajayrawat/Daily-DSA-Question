// https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/
// T.C : O(N)
// S.C : O(N)

class Solution {
public:
    const int MOD = 1e9 + 7;
    int count(int index, int seats, string& corridor, vector<vector<int>>&dp) {
        if (index == corridor.size()) {
            return seats == 2 ? 1 : 0;
        }

        if (dp[index][seats] != -1) {
            return dp[index][seats];
        }

        int result = 0;

        if (seats == 2) {
            if (corridor[index] == 'S') {
                result = count(index + 1, 1, corridor, dp);
            } else {
                result = (count(index + 1, 0, corridor, dp) + count(index + 1, 2, corridor, dp)) % MOD;  
            }

        } else {
        
            if (corridor[index] == 'S') {
                result = count(index + 1, seats + 1, corridor, dp);
            } else {
                result = count(index + 1, seats, corridor, dp);
            }
        }

        return dp[index][seats]= result;
    }

    int numberOfWays(string corridor) {
        vector<vector<int>>dp(corridor.size(),vector<int>(3,-1));
        return count(0, 0, corridor, dp);
    }
};

