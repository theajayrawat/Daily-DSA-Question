// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1
// TC: O(N)
// SC: O(1)

class Solution
{
public:
    // Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int ans = 0;
        int s1 = 0;
        int s2 = arr[0];

        for (int i = 1; i < n; i++)
        {
            ans = max(s1 + arr[i], s2);
            s1 = s2;
            s2 = ans;
        }

        return ans;
    }
};
