// https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
// T.C : O(N)
// S.C : O(N)

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int xxor=pref[0];

        for(int i=1;i<pref.size();i++){
            pref[i]=xxor^pref[i];
            xxor^=pref[i];
        }

        return pref;
    }
};

