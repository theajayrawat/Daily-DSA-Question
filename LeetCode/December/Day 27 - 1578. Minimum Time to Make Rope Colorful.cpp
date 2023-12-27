// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
// TC: O(N)
// SC: O(1)

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
            int cost = 0;
    int n = colors.length();

    for(int i=1;i<n;i++){
        if(colors[i]==colors[i-1]){
            cost += min(neededTime[i],neededTime[i-1]);
            if(neededTime[i]<neededTime[i-1]){
                neededTime[i] = neededTime[i-1];
            }
        }
    }

    return cost;
    }
};


