// https://leetcode.com/problems/count-of-matches-in-tournament/
// TC: O(logn)
// SC: O(1)



class Solution {
public:
    int numberOfMatches(int n) {
        if(n<2)
            return 0;
        if(n==2)
            return 1;
        if(n%2)
            return numberOfMatches((n - 1) / 2)+(n - 1) / 2 +1;
        return numberOfMatches(n / 2)+n/2;
    }
};