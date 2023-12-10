// https://leetcode.com/problems/transpose-matrix/
// TC: O(N^2)
// SC: O(N^2)

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(n==m){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i>j)
                        swap(matrix[i][j],matrix[j][i]);
                }
            }
            return matrix;
        }
        
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ans[i][j] = matrix[j][i];
            }
        }
        return ans;
    }
};



