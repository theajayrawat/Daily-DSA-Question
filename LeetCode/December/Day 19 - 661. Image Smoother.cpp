// https://leetcode.com/problems/image-smoother/
// TC: O(N*N)
// SC: O(N*N)

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j]=help(img,i,j);
            }
        }
        return v;
    }
    int help(vector<vector<int>>& img,int i,int j){
        int ans=0;
        int c=1;
        int n=img.size();
        int m=img[0].size();
        ans+=img[i][j];
        if(i>0){
            ans+=img[i-1][j];
            c++;
        }
        if(j>0){
            ans+=img[i][j-1];
            c++;
        }
        if(i>0&&j>0){
            ans+=img[i-1][j-1];
            c++;
        }
        if(i<n-1){
            ans+=img[i+1][j];
            c++;
        }
        if(j<m-1){
            ans+=img[i][j+1];
            c++;
        }
        if(i<n-1&&j<m-1){
            ans+=img[i+1][j+1];
            c++;
        }
        if(i>0&&j<m-1){
            ans+=img[i-1][j+1];
            c++;
        }
        if(j>0&&i<n-1){
            ans+=img[i+1][j-1];
            c++;
        }
        return ans/c;
        
    }
};


