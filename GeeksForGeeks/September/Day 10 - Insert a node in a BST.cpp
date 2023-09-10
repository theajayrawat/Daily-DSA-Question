// https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1
// TC: O(H)
// SC: O(H)

class Solution
{
public:
    Node *insert(Node *node, int data)
    {

        // Your code goes here
        if (!node)
            return new Node(data);
        if (node->data < data)
        {
            node->right = insert(node->right, data);
        }
        else if (node->data > data)
        {
            node->left = insert(node->left, data);
        }

        return node;
    }
};