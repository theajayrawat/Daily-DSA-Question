// https://leetcode.com/problems/majority-element-ii/
// TC: O(N)
// SC: O(1)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ans1=0, ans2=0;
        int cnt1=0, cnt2=0;
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=ans2){
                ans1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0 && nums[i]!=ans1){
                ans2=nums[i];
                cnt2=1;
            }
            else if(ans1==nums[i])
                cnt1++;
            else if(ans2==nums[i])
                cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(ans1==nums[i])
                cnt1++;
            else if(ans2==nums[i])
                cnt2++;
        }

        int mini = n / 3 + 1;
        if (cnt1 >= mini) v.push_back(ans1);
        if (cnt2 >= mini) v.push_back(ans2);

        return v;
    }
};