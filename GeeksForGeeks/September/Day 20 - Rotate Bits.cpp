// https://practice.geeksforgeeks.org/problems/rotate-bits4524/1
// TC: O(N)
// SC: O(1)

class Solution
{
public:
    vector<int> rotate(int n, int d)
    {
        // code here.
        d %= 16;
        int s = pow(2, 16) - 1;
        int a = ((n << d) | (n >> (16 - d))) & s;
        int b = ((n >> d) | (n << (16 - d))) & s;
        return {a, b};
    }
};