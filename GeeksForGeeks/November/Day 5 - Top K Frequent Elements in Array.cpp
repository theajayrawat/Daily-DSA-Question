// https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1
// TC: O(NLogN)
// SC: O(N)

class Solution {
  public:
    static bool  cmp(pair<int, int>&a, pair<int, int>&b) { 
        if(a.second==b.second)
            return a.first>b.first;
        return a.second > b.second; 
    } 
 
    vector<int> help(unordered_map<int,int>&mp, int k) { 
 
        vector<pair<int, int> > A; 
 
        for (auto& it : mp) { 
            A.push_back(it); 
        } 
 

        sort(A.begin(), A.end(), cmp); 
 
        vector<int>res; 
        for (auto& it : A) { 
            if(k==0)
                break;
            k--;
           res.push_back(it.first);
        } 
        
        return res;
    } 
    
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        return help(mp,k);
        
    }
};