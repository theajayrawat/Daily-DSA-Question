// https://leetcode.com/problems/longest-palindromic-substring/
// T.C : O(N*N)
// S.C : O(1)

class Solution {
public:
    string longestPalindrome(string s) {  
        int n=s.size();
        string res;
        int resLen=0;

        for(int i=0;i<n;i++)
        {
            //odd length;
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r])
            {
                if(r-l+1>resLen)
                {
                    resLen=r-l+1;
                    res=s.substr(l,resLen);
                }
                l--;
                r++;
            }

            //even length
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r])
            {
                if(r-l+1>resLen)
                {
                    resLen=r-l+1;
                    res=s.substr(l,resLen);
                }
                l--;
                r++;
            }

        }

        return res;
    }
};


