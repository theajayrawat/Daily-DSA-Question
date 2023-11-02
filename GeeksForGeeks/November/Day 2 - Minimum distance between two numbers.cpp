// https://www.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1
// TC: O(N)
// SC: O(1)

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int dx=INT_MAX;
        int dy=INT_MAX;
        int ans=INT_MAX;
        
        for(int i=0;i<n;i++){
            if(a[i]==x && a[i]==y)
                return 0;
                
            if(a[i]==x)
                dx=i;
            else if(a[i]==y)
                dy=i;
            
            if(dx!=INT_MAX && dy!=INT_MAX)
                ans=min(ans,abs(dy-dx));
        }
        
        return ans==INT_MAX?-1:ans;
        
    }
};
