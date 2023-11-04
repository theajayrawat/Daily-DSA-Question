// https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/
// TC: O(N)
// SC: O(1)

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int l=0,r=n;
        if(left.size()){
            for(int i=0;i<left.size();i++){
                l=max(left[i],l);
            }
        }
        if(right.size()){
            for(int i=0;i<right.size();i++){
                r=min(right[i],r);
            }
        }

        return max(n-r,l);
    }
};

