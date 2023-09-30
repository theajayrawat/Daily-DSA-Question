// https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1
// TC: O(N*M)
// SC: O(N+M)

class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int n = matrix.size(), m = matrix[0].size();
        vector<int> rows;
        vector<int> cols;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 1){
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        
        for(auto r: rows){
            for(int i=0; i<m; i++){
                matrix[r][i] = 1;
            }
        }
        
        for(auto c: cols){
            for(int i=0; i<n; i++){
                matrix[i][c] = 1;
            }
        }
        
        return;
    }