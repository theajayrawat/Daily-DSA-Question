// https://practice.geeksforgeeks.org/problems/perfect-numbers3207/1
// TC: O(sqrt(N))
// SC: O(1)

class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if(N==1)
            return 0;
            
        long long sum=1;
        for(long long i=2;i*i<N;i++)
        {
            if(N%i==0)
                sum=sum+i+(N/i);
        }
        return sum==N;
    }
};