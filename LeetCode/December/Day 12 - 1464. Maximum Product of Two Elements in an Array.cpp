// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// TC: O(N)
// SC: O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int biggest = 0;
        int secondBiggest = 0;
        for (int num : nums) {
            if (num > biggest) {
                secondBiggest = biggest;
                biggest = num;
            } else {
                secondBiggest = max(secondBiggest, num);
            }
        }
        
        return (biggest - 1) * (secondBiggest - 1);
    }
};