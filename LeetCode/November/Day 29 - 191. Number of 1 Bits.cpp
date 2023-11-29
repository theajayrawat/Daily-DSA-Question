// https://leetcode.com/problems/number-of-1-bits/
// T.C : O(1)
// S.C : O(1)

class Solution {
public:
    int hammingWeight(uint32_t n)
{
    int res = 0;
    while(n)
    {
        n &= n - 1;
        ++ res;
    }
    return res;
}
};