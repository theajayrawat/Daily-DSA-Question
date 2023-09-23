// https://practice.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1
// TC: O(min(M, N))
// SC: O(min(H1, H2))

class Solution
{
public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1, Node *root2)
    {
        // add code here.
        if (!root1 && !root2)
            return true;
        else if (!root1 || !root2)
            return false;
        if (root1->data != root2->data)
        {
            return false;
        }
        return isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right) || (isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left));
    }
};