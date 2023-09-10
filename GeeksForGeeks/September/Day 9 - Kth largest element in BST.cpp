// https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1
// TC: O(N)
// SC: O(H)

class Solution
{
    public:
    void solve(Node* root, priority_queue<int, vector<int>, greater<int>>&q, int K){
        if(!root)
            return;
            
        int val=root->data;
        
        if(q.size()==K){
            if(q.top()<val){
                q.pop();
                q.push(val);
            }
        }
        else{
            q.push(val);
        }
        
        solve(root->left,q,K);
        solve(root->right,q,K);
        
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        priority_queue<int, vector<int>, greater<int>>q;
        
        solve(root,q,K);
        
        return q.top();
    }
};