// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
// TC: O(N)
// SC: O(1)

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum=0;
        for(int i=0;i<n;i++)sum+=a[i];
        int summ=0;
        for(int i=0;i<n;i++){
            sum-=a[i];
            if(sum==summ)return i+1;
            summ+=a[i];
        }
        return -1;
    }

};