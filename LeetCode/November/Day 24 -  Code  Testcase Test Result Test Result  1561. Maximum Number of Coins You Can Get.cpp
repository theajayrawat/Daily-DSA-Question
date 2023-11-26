// https://leetcode.com/problems/maximum-number-of-coins-you-can-get/
// TC: O(N)
// SC: O(N)

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        deque<int> queue;
        for (int num : piles) {
            queue.push_back(num);
        }
        
        int ans = 0;
        while (!queue.empty()) {
            queue.pop_back(); 
            ans += queue.back(); 
            queue.pop_back();
            queue.pop_front(); 
        }
        
        return ans;
    }
};

