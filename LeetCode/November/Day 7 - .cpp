// https://leetcode.com/problems/eliminate-maximum-number-of-monsters/
// TC: O(N)
// SC: O(N)

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<float> arrival;
        for(int i=0;i<n;i++){
            arrival.push_back((float) dist[i] / speed[i]);
        }

        sort(arrival.begin(), arrival.end());
        int cnt=1;

        for(int i=1;i<n;i++){
            if(arrival[i]>i)
                cnt++;
            else
                return cnt;
            
        }

        return cnt;

    }
};