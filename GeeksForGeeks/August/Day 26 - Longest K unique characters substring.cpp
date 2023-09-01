// Link:https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        int ans = -1;
        int n = s.size();
        unordered_map<char, int> mp;
        int i;
        for (i = 0; i < n; i++)
        {
            mp[s[i]]++;
            if (mp.size() == k)
            {
                ans = max(ans, i + 1);
                break;
            }
        }

        int l = 0;
        for (int j = i + 1; j < n; j++)
        {
            mp[s[j]]++;
            while (mp.size() > k)
            {
                if (mp[s[l]] > 1)
                    mp[s[l]]--;
                else
                {
                    mp.erase(s[l]);
                }
                l++;
            }

            if (mp.size() == k)
                ans = max(ans, j - l + 1);
        }

        return ans;
    }
};