// https://practice.geeksforgeeks.org/problems/sum-of-xor-of-all-pairs0723/1
// T.C : O(N)
// S.C : O(1)

class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	//Complete the function
    	long ans=0;
    	  for(int i=0;i<32;i++)
        {
            int ones=0;
            for(int j = 0; j < n; j++)
            {
                if((arr[j]&(1<<i))!=0)  
                    ones++;
            }
            ans+=(((long)ones*(n-ones))*(1<<i));
        }
        return ans;
    }
};


