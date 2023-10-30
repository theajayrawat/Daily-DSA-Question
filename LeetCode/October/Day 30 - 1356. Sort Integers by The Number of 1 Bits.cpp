// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
// T.C : O(N)
// S.C : O(N)

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr){
        vector<pair<int,int>>v;
        for(auto i:arr){
            v.push_back(make_pair(cnt_bit(i),i));
        }
        sort(v.begin(), v.end());
        vector<int>ans;
        for(auto i:v){
            ans.push_back(i.second);
        }
        return ans;
    }

    //__builtin_popcount(n)
    int cnt_bit(int n){
        int cnt=0;
        while(n){
            n&=(n-1);
            cnt++;
        }
        return cnt;
    }
};