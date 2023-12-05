// https://leetcode.com/problems/largest-3-same-digit-number-in-string/
// TC: O(N)
// SC: O(1)

class Solution {
public:
    string largestGoodInteger(string num) {
        int ans=-1;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                ans=max(ans,num[i]-'0');
                i+=2;
            }
        }

        return ans==-1?"":to_string(ans)+to_string(ans)+to_string(ans);
    }
};
