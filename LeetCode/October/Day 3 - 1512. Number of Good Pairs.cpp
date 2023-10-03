// https://leetcode.com/problems/number-of-good-pairs/
// TC: O(N)
// SC: O(N)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      int count = 0;
        unordered_map<int, int> num_freq;
        for (int num : nums) {
            num_freq[num]++;
        }
        for (const auto& entry : num_freq) {
            int freq = entry.second;
            count += (freq * (freq - 1)) / 2;
        }
        return count;  
    }
};