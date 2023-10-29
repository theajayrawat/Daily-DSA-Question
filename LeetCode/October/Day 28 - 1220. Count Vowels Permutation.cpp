// https://leetcode.com/problems/count-vowels-permutation/
// T.C : O(N)
// S.C : O(N)

class Solution {
public:
    int MOD=1e9+7;
    long long int f(int n, int i, char c, vector<vector<int>> &dp, unordered_map<char, int> &mp){
        
        if(i==n) return 1;
        long long count = 0;
        if(dp[mp[c]][i]!=-1) return dp[mp[c]][i]%MOD;

        if(c=='a')count += f(n, i+1, 'e', dp, mp);
        if(c=='e'){
            count += f(n, i+1, 'a', dp, mp);
            count += f(n, i+1, 'i', dp, mp);
        }
        if(c=='i'){
            count += f(n, i+1, 'a', dp, mp);
            count += f(n, i+1, 'e', dp, mp);
            count += f(n, i+1, 'o', dp, mp);
            count += f(n, i+1, 'u', dp, mp);
        }
        if(c=='o'){
            count += f(n, i+1, 'i', dp, mp);
            count += f(n, i+1, 'u', dp, mp);
        }
        if(c=='u')count += f(n, i+1, 'a', dp, mp);

        return dp[mp[c]][i] = count%MOD;
        
    }
    
    int countVowelPermutation(int n) {
        unordered_map<char, int> mp;
        mp['a'] = 0;
        mp['e'] = 1;
        mp['i'] = 2;
        mp['o'] = 3;
        mp['u'] = 4;
        
        vector<vector<int>> dp(5, vector<int>(n+1, -1));
        long long cnt=0;
        vector<char>v={'a','e','i','o','u'};
        for(int j=0;j<v.size();j++){
           char s=v[j];
           cnt+=f(n, 1, s, dp, mp);
        }
         return cnt%MOD;
    }
};

