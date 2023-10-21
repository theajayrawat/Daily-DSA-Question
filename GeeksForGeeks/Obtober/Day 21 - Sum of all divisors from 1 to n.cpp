// https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
// T.C : O(N)
// S.C : O(1)

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long ans=0;
        
        for(long long  i=1;i<=N;i++){
            long long times=N/i;
            ans+=(i*times);
        }
        
        return ans;
    }
};

