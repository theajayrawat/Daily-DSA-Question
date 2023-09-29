// https://leetcode.com/problems/monotonic-array/
// TC: O(N)
// SC: O(1)

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        bool mi = true;
        bool md = true;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
                md = false;
            if (nums[i] > nums[i + 1])
                mi = false;
        }

        return mi || md;
    }
};
