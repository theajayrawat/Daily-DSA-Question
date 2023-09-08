// https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1
// TC: O(NLogN)
// SC: O(N)

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node* helper(vector<int>&v, int l, int h){
        if(l>h)
            return NULL;
            
        int mid=l+ (h-l)/2;
        Node* node= new Node(v[mid]);
        node->left= helper(v,l,mid-1);
        node->right= helper(v,mid+1,h);

        return node;
        
    }
    void inorder(Node* root,vector<int>&v)
    {
        if(root==NULL)
            return;
            
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>v;
        inorder(root,v);
        
        sort(v.begin(),v.end());
        
        int n=v.size();
        Node *ans=helper(v,0,n-1); 
        
        return ans;
        
    }
};