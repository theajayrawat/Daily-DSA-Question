// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
// TC: O(LogN)
// SC: O(1)

class Solution
{
    public:
    vector<int> find(int nums[], int n , int x )
    {
        // code here
        int a=-1;
        int start=0;
        int end=n-1;
        while(start <= end){
            int mid = start + (end -start)/2;
            if(nums[mid] == x){
                a=mid;
                end = mid -1;
            }else if(nums[mid] > x){
                end = mid -1;
            }else if(nums[mid]<x){
                start = mid + 1;
            }
        }
        if(a==-1)
            return {-1,-1};

        int b=-1;
        start=0;
        end=n-1;
        while(start <= end){
            int mid = start + (end -start)/2;
            if(nums[mid] == x){
                b=mid;
                start=mid+1;
            }else if(nums[mid] > x){
                end = mid -1;
            }else if(nums[mid]<x){
                start = mid + 1;
            }
        }
        
      
        return {a,b};
    }
};