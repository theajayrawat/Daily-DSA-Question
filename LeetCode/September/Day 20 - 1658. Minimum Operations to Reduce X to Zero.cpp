// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
// TC : O(N)
// SC: O(1)

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }

        if(totalSum < x) 
            return -1;
		if(totalSum == x) 
            return n;

        int target=totalSum-x;
        int currentSum=0;
        int maxSize=0;
        int start=0;

        for(int i=0;i<n;i++){
            currentSum+=nums[i];

            while(currentSum > target){
                currentSum-=nums[start];
                start++;
            }

            if(currentSum == target)
				maxSize = max(maxSize, i - start + 1);
        }

        return maxSize==0 ? -1 : n-maxSize;

    }
};