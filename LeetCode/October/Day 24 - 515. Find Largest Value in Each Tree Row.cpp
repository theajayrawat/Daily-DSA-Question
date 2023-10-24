// https://leetcode.com/problems/find-largest-value-in-each-tree-row/
// T.C : O(N)
// S.C : O(H)

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>v;
        if(!root)return v;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode*curr=q.front();
                q.pop();
                maxi=max(maxi,curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            v.push_back(maxi);
        }
        return v;
    }
};