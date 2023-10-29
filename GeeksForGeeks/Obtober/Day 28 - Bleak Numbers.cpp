// https://practice.geeksforgeeks.org/problems/bleak-numbers1552/1
// T.C : O(N)
// S.C : O(1)

class Solution
{
public:
	int is_bleak(int n)
	{
	    // Code here
	    for(int i=n-1;i>=max(1,n-32);i--){
	        if(i+countSetBits(i)==n)return false;
	    }
	    return true;
	}
	
	int countSetBits(int n){
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
	}
};