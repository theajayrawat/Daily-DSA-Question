// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points
// TC: O(NlogN)
// SC: O(1)

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        
        int ans = 0;
        for (int i = 1; i < points.size(); i++) {
            ans = max(ans, points[i][0] - points[i - 1][0]);
        }
        
        return ans;
    }
};
