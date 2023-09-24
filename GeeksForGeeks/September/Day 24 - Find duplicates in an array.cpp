// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
// TC: O(N)
// SC: O(N)

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        
        vector<int>v;
        for(auto i:mp){
            if(i.second>1)
                v.push_back(i.first);
        }
        
        if(v.size()==0)
            return {-1};
          
        sort(v.begin(),v.end());
        return v;
    }
};



