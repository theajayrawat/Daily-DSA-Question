// https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1
// TC: O(N)
// SC: O(N)

class Solution
{
public:
    // Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n)
    {
        // code here
        vector<long long> v(n, 1);

        for (int i = 2; i < n; i++)
        {
            v[i] = v[i - 1] + v[i - 2];
        }

        return v;
    }
};