// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
// TC: O(N)
// SC: O(N)

class Solution{
    public:
    //Function to find the height of a binary tree.
    int solve(struct Node* node){
        if(!node)
            return 0;
        
        int l=1+solve(node->left);
        int r=1+solve(node->right);
        
        return max(l,r);
    }
    int height(struct Node* node){
        // code here
        return solve(node);
    }
};