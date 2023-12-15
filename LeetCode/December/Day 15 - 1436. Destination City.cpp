// https://leetcode.com/problems/destination-city/
// TC: O(N)
// SC: O(N)

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> hasOutgoing;
        for (int i = 0; i < paths.size(); i++) {
            hasOutgoing.insert(paths[i][0]);
        }
 
        string str;
        for (int i = 0; i < paths.size(); i++) {
            string city = paths[i][1];
            if (hasOutgoing.find(city) == hasOutgoing.end()) {
                str=city;
                break;
            }
        }
        
        return str;
    }
};