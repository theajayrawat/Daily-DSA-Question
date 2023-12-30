// https://www.geeksforgeeks.org/problems/check-if-a-string-is-repetition-of-its-substring-of-k-length3302/1
// TC: O(N)
// SC: O(N)

class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Here
	    if(n%k!=0) 
	        return 0;
        unordered_map<string,int>m;
        for(int i=0;i<n;i+=k){
            m[s.substr(i,k)]++;
            if(m.size()>2) 
                return 0;
        }
        if(m.size()<2) 
            return 1;
        for(auto it=m.begin();it!=m.end();++it){
            if(it->second==1) 
                return 1;
        }
        return 0;
	}
};