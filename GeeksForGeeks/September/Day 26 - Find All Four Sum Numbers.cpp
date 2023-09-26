// https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1
// TC: O(N^3)
// SC: O(N^2)

class Solution
{
public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &arr, int k)
    {
        // Your code goes here
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            while (i > 0 && i < n && arr[i] == arr[i - 1])
                i++;
            for (int j = i + 1; j < n; j++)
            {
                while (j > i + 1 && arr[j] == arr[j - 1])
                    j++;

                int l = j + 1;
                int m = n - 1;

                while (l < m)
                {
                    int sum = arr[i] + arr[j] + arr[m] + arr[l];
                    if (sum == k)
                    {
                        ans.push_back({arr[i], arr[j], arr[l], arr[m]});
                        l++;
                        m--;
                        while (l < m && arr[l] == arr[l - 1])
                            l++;
                        while (l < m && arr[m] == arr[m + 1])
                            m--;
                    }
                    else if (sum < k)
                    {
                        l++;
                    }
                    else
                        m--;
                }
            }
        }

        return ans;
    }
};
