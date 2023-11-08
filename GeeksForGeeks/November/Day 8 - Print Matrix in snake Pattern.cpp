// https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1
// TC: O(N*N)
// SC: O(1)

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int>v;
        int n=matrix.size();
        
        bool isReverse=false;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int index=isReverse ? n-j-1 : j;
                v.push_back(matrix[i][index]);
            }
            
            isReverse=!isReverse;
        }
        
        return v;
    }
};