// https://leetcode.com/problems/combination-sum-iv/
// TC: O(N^T)
// SC: O(T)

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int>dp(target+1,0);
        sort(nums.begin(),nums.end());
        dp[0] = 1;

        for (int combSum = 1; combSum < target + 1; ++combSum) {
            for (int num : nums) {
                if (combSum - num >= 0)
                    dp[combSum] += dp[combSum - num];
                else
                    break;
            }
        }
        return dp[target];
    }
};