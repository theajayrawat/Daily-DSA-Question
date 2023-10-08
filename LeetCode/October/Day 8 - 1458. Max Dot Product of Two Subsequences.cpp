// https://leetcode.com/problems/max-dot-product-of-two-subsequences/
// TC: O(N*M)
// SC: O(N*M)

class Solution {
public:
    unordered_map<string, int> d;

    int maxDotProduct_helper(vector<int>& nums1,vector<int>& nums2, int i, int j) {
        if (i >= nums1.size() || j >= nums2.size()) {
            return 0;
        }

        string key = to_string(i) + " " + to_string(j);
        if (d.find(key) != d.end()) {
            return d[key];
        }

        int ans = max({
            maxDotProduct_helper(nums1, nums2, i + 1, j),
            nums1[i] * nums2[j] + maxDotProduct_helper(nums1, nums2, i + 1, j + 1),
            maxDotProduct_helper(nums1, nums2, i, j + 1)
        });

        d[key] = ans;
        return ans;
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int first_max = INT_MIN;
        int second_max = INT_MIN;
        int first_min = INT_MAX;
        int second_min = INT_MAX;

        for (int num : nums1) {
            first_max = max(first_max, num);
            first_min = min(first_min, num);
        }

        for (int num : nums2) {
            second_max = max(second_max, num);
            second_min = min(second_min, num);
        }

        if ((first_max < 0 && second_min > 0) || (first_min > 0 && second_max < 0)) {
            return max(first_max * second_min, first_min * second_max);
        }

        return maxDotProduct_helper(nums1, nums2, 0, 0);
    }
};

