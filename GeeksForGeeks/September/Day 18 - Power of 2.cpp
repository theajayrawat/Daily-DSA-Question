// https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
// TC: O(logN)
// SC: O(1)

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here 
        if(n==1)
            return true;
        if(n%2 || n==0)
            return false;
        
        return isPowerofTwo(n/2);
    }
};