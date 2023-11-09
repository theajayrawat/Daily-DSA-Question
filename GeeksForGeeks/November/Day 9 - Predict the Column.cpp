// https://www.geeksforgeeks.org/problems/predict-the-column/1
// TC: O(N*N)
// SC: O(1)

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int curr = 0, mx = 0, ind = -1;
        for(int i=0; i<N; i++){
            int count = 0;
            for(int j=0; j<N; j++){
                if(arr[j][i] == 0)
                    count++;
            }
            if(count == N)
                return i;
            if(mx<count)
                ind = i;
            mx = max(mx, count);
        }
        return ind;
        
    }
};