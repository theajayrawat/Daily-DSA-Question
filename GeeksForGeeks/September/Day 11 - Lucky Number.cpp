// https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1
// TC: O(sqrt(N))
// SC: O(sqrt(N))

class Solution{
public:
    bool solve(int n, int cnt){
        if(cnt>n)
            return true;
        if(n%cnt==0)
            return false;
        
        return solve(n-n/cnt,cnt+1);
    }
    bool isLucky(int n) {
        // code here4
        return solve(n,2);
    }
};

