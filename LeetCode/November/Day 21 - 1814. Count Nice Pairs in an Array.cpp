// https://leetcode.com/problems/count-nice-pairs-in-an-array/
// TC: O(N)
// SC: O(N)

class Solution {
public:
    int rev(int x){
        int no=0;
        while(x){
            no=no*10+x%10;
            x/=10;
        }

        return no;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;

        int n=nums.size();

        long cnt=0;
        int m=1e9+7;

        for(int i=0;i<n;i++){
            int y=nums[i]-rev(nums[i]);
            mp[y]++;
        }

        for(auto &i:mp){
            long pairs=(long)i.second*(i.second-1)/2;
            cnt=(cnt+pairs)%m;
        }

        return cnt;
    }
};

