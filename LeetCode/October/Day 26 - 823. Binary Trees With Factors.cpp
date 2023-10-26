// https://leetcode.com/problems/binary-trees-with-factors/
// T.C : O(N*N)
// S.C : O(N)

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_map<int,long long >mp;
        int n=arr.size();
        mp[arr[0]]++;
        
        for(int i=1;i<n;i++){
            int root=arr[i];
            mp[arr[i]]=1;

            for(int j=0;j<i;j++){
                int leftChild=arr[j];
                if(root%leftChild == 0 && mp.find(root/leftChild) != mp.end()){
                    mp[root]+=mp[leftChild]*mp[root/leftChild];
                }
            }
        }

        long long result=0;
        long long m=1e9 + 7;
        for(auto &it :mp){
            result= (result + it.second)%m;
        }

        return result;
    }
};

