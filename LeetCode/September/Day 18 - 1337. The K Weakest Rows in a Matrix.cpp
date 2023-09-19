// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
// TC : O(MlogN)
// SC: O(M)

class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        set<pair<int, int>> s; // value,index

        for (int i = 0; i < mat.size(); i++)
        {
            s.insert({binarysearch(mat[i]), i});
        }

        vector<int> ans;
        for (auto i : s)
        {
            if (k == 0)
                break;
            ans.push_back(i.second);
            k--;
        }
        return ans;
    }
    int binarysearch(vector<int> &v)
    {
        int lo = 0;
        int hi = v.size() - 1;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (v[mid] == 1)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        return lo;
    }
};