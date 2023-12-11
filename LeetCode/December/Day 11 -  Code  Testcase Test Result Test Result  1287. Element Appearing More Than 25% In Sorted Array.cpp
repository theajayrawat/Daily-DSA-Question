// https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
// TC: O(N)
// SC: O(1)

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        
        int freq = n/4;
        
        vector<int> candidates{arr[n/4], arr[n/2], arr[3*n/4]};
        
        for(int &candidate : candidates) {
            
            int left = lower_bound(arr.begin(), arr.end(), candidate) - arr.begin();
            int right = upper_bound(arr.begin(), arr.end(), candidate) - arr.begin() - 1;
            
            
            if(right-left+1 > freq) {
                return candidate;
            }
        }
        
        return -1;
        
    }
};class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        
        int freq = n/4;
        
        vector<int> candidates{arr[n/4], arr[n/2], arr[3*n/4]};
        
        for(int &candidate : candidates) {
            
            int left = lower_bound(arr.begin(), arr.end(), candidate) - arr.begin();
            int right = upper_bound(arr.begin(), arr.end(), candidate) - arr.begin() - 1;
            
            
            if(right-left+1 > freq) {
                return candidate;
            }
        }
        
        return -1;
        
    }
};