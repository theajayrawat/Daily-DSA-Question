// https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1
// TC: O(q)
// SC: O(q)

class Solution
{
public:
    bool isValid(int r, int c, int n, int m)
    {
        if (r >= 0 && r < n && c >= 0 && c < m)
            return true;
        return false;
    }
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        // code here
        vector<int> result;
        for (int c = 0; c < q; c++)
        {
            int h = queries[c][0];
            int i = queries[c][1];
            int j = queries[c][2];

            int sum = 0;

            int ur = i - h, dr = i + h, lc = j - h, rc = j + h;

            for (int k = lc; k < rc; k++)
                if (isValid(ur, k, n, m))
                    sum = sum + mat[ur][k];
            for (int k = ur; k < dr; k++)
                if (isValid(k, rc, n, m))
                    sum = sum + mat[k][rc];
            for (int k = rc; k > lc; k--)
                if (isValid(dr, k, n, m))
                    sum = sum + mat[dr][k];
            for (int k = dr; k > ur; k--)
                if (isValid(k, lc, n, m))
                    sum = sum + mat[k][lc];

            result.push_back(sum);
        }

        return result;
    }
};