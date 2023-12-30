// https://www.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1
// TC: O(N)
// SC: O(N)

class Solution
{
public:
    vector<string> winner(string arr[], int n)
    {
        map<string, int> mp;
        int max = 0;
        string s;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        for (auto i : mp)
        {
            if (i.second > max)
            {
               if(i.second==max){
                    s=s<i.first?s:i.first;
                }else{
                    s = i.first;
                }
                
                max = i.second;
            }
        }
        return {s, to_string(max)};
    }
};
