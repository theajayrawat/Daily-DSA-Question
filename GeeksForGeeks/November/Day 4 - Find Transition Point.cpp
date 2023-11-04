// https://www.geeksforgeeks.org/problems/find-transition-point-1587115620/1
// TC: O(LogN)
// SC: O(1)

class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr[mid]==0)
                i=mid+1;
            else
                j=mid-1;
        }
        
        return i==n?-1:i;
        
    }
};