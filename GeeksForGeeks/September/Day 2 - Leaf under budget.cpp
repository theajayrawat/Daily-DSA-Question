// https://practice.geeksforgeeks.org/problems/leaf-under-budget/1
// TC: O(N)
// SC: O(N)

class Solution
{
public:
    int getCount(Node *root, int k)
    {
        // code here
        queue<Node *> q;
        int lev = 0;
        q.push(root);
        int ans = 0;
        while (q.size())
        {
            int qSize = q.size();
            lev++;
            while (qSize--)
            {
                Node *curr = q.front();
                q.pop();
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
                if (!curr->left && !curr->right)
                {
                    if (k >= lev)
                    {
                        k -= lev;
                        ans++;
                    };
                }
            }
        }

        return ans;
    }
};