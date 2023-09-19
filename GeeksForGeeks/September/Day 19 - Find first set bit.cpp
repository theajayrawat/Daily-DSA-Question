// https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1
// TC: O(logN)
// SC: O(1)


class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        unsigned int cnt=0;
        
        if(n==0)
            return cnt;
        while(cnt<32){
            if((n&(1<<cnt))!=0)
                return cnt+1;
            cnt++;
        }
        
        return cnt;
    }
};