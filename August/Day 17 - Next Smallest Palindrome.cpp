// Link:https://practice.geeksforgeeks.org/problems/next-smallest-palindrome4740/1
// Time Complexity: O(N)
// Space Complexity: O(N)

class Solution
{
public:
    vector<int> generateNextPalindrome(int num[], int n)
    {
        // If the number is a single digit
        if (n == 1)
        {
            if (num[0] == 9)
            {
                // Special case: Incrementing 9 leads to a two-digit palindrome
                return {1, 1};
            }
            else
            {
                // Increment the digit and return
                return {num[0] + 1};
            }
        }

        // Create a vector to store the number as individual digits
        vector<int> ans(num, num + n);

        // Calculate the middle and pointers for comparison
        int mid = n / 2;
        int i = mid - 1;
        int j = (n % 2) ? mid + 1 : mid;
        bool leftsmaller = false;

        // Check if the number is already a palindrome
        while (i >= 0 and j < n and ans[i] == ans[j])
        {
            i--;
            j++;
        }

        // Check if the left side is smaller than the right
        if (i < 0 or (ans[i] < ans[j]))
        {
            leftsmaller = true;
        }

        // Mirror the left side to the right side
        while (i >= 0)
        {
            ans[j++] = ans[i--];
        }

        // If the left side is smaller, handle carrying
        if (leftsmaller)
        {
            int carry = 1;
            i = mid - 1;

            // Increment the middle element if odd length
            if (n % 2 == 1)
            {
                ans[mid] += carry;
                carry = ans[mid] / 10;
                ans[mid] %= 10;
                j = mid + 1;
            }
            else
            {
                j = mid;
            }

            // Propagate carrying and update digits
            while ((i >= 0 || carry))
            {

                // If there's still a digit left
                if (i >= 0)
                {
                    ans[i] += carry;
                    carry = ans[i] / 10;
                    ans[i] %= 10;
                    ans[j++] = ans[i--]; // Update ans[j] with the updated ans[i]
                }
                // If carrying continues beyond the number
                else if (carry)
                {
                    ans.insert(ans.begin(), carry);
                    ans[j] = carry;
                    carry = 0;
                    i = 0;
                }
            }
        }

        return ans;
    }
};

