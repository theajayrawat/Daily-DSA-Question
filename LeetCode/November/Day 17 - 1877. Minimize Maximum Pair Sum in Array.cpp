// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
// TC: O(N*LogN)
// SC: O(1)

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        int ans = 0;

        while (i <= j) {
            if (nums[i] + nums[j] > ans)
                ans=nums[i] + nums[j];
            j--;
            i++;
        }

        return ans;
    }
};