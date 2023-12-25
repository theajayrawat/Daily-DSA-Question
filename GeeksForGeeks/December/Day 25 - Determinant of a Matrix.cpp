// https://www.geeksforgeeks.org/problems/determinant-of-a-matrix-1587115620/1
// TC: O(N^3)
// SC: O(N^2)

class Solution
{   
    public:
    //Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > mat, int n)
    {
        if(n == 1) 
            return mat[0][0];
        
        int res = 0;
        for(int i=0; i<n; i++){
            vector<vector<int>>v(n-1, vector<int>(n-1));
            
            for(int j=1; j<n; j++){ 
                int curr = 0;
                for(int k=0; k<n; k++){
                    if(k == i) continue;
                    v[j-1][curr] = mat[j][k];
                    curr++;
                }
            }

            if(i%2 == 0) 
                res += mat[0][i] * determinantOfMatrix(v, n-1);
            else 
                res -= mat[0][i] * determinantOfMatrix(v, n-1);
        }
        return res;
    }
};

