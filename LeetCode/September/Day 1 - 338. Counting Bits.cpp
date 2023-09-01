// https://leetcode.com/problems/counting-bits/
// TC: O(N)
// SC: O(N)

class Solution {
public:
    int count(int x){
        int cnt=0;
        while(x){
            cnt++;
            x&=(x-1);
        }

        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>ans;

        for(int i=0;i<=n;i++){
            ans.push_back(count(i));
        }

        return ans;
    }
};