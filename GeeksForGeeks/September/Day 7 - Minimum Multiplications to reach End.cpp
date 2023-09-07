// https://practice.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1
// TC: O(N)
// SC: O(N)

class Solution
{
public:
    int minimumMultiplications(vector<int> &arr, int start, int end)
    {
        // code here
        if (start == end)
            return 0;
        int mod = 1e5;
        vector<bool> vis(mod);
        queue<pair<int, int>> q;
        q.push({0, start});
        vis[start] = 1;
        while (!q.empty())
        {
            int level = q.front().first;
            int temp = q.front().second;
            q.pop();
            for (int i = 0; i < arr.size(); i++)
            {
                int prod = (temp * arr[i]) % mod;
                if (prod == end)
                    return level + 1;
                if (vis[prod])
                    continue;
                q.push({level + 1, prod});
                vis[prod] = 1;
            }
        }
        return -1;
    }
};