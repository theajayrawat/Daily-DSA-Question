// https://www.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1
// TC: O(N*N)
// SC: O(1)

class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
         int up=0, down=0, i, j;
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(i<=j) up+=matrix[i][j];
                if(i>=j) down+=matrix[i][j];
            }
        }
        return {up, down};
    }
};
