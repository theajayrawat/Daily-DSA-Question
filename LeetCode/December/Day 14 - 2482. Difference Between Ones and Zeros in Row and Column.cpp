// https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/
// TC: O(N*M)
// SC: O(N+M)

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& mat) {
         int m = mat.size();
        int n = mat[0].size();
        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);
        
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (mat[row][col] == 1) {
                    rowCount[row]++;
                    colCount[col]++;
                }
            }
        }
        
        int ans = 0;
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                mat[row][col]=rowCount[row]+colCount[col] - (m-colCount[col] + n-rowCount[row]);
            }
        }
        
        return mat;
    }
};