// https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1
// TC: O(N)
// SC: O(1)

class Solution
{
public:
    string findLargest(int N, int S)
    {
        // code here
        if (N == 1 && S == 0)
            return "0";
        if (N > 1 && S == 0)
            return "-1";

        string ans;
        for (int i = 0; i < N; i++)
        {
            if (S >= 9)
            {
                S -= 9;
                ans += '9';
            }
            else
            {
                ans += to_string(S);
                S = 0;
            }
        }

        if (S > 0)
            return "-1";

        return ans;
    }
};