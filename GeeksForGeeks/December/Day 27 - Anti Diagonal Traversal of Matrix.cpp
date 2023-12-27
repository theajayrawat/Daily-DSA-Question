// https://www.geeksforgeeks.org/problems/print-diagonally1623/1
// TC: O(N*N)
// SC: O(N*N)

class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        int n=matrix.size();
        vector<int>v;
        int cnt=0;
        for(int i=0;i<n;i++){
            
            while(cnt+1){
                v.push_back(matrix[i-cnt][cnt]);
                cnt--;
            }
            
            cnt=i+1;
        }
        
        cnt=n-1;
        for(int j=1;j<n;j++){
            int i=j;
            while(i<n){
                v.push_back(matrix[i][cnt]);
                cnt--;
                i++;
            }
            
            cnt=n-1;
            
        }
        
        return v;
    }
};



