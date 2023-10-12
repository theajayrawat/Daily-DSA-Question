// https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1
// TC: O(N)
// SC: O(N)

class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    string DFS(Node* root, unordered_map<string, int>& mp){
        if(root == NULL) 
            return "NULL";
         if(root->left==NULL && root->right==NULL)            
            return to_string(root->data);
        
        string s = to_string(root->data) + "," + DFS(root->left, mp) + "," + DFS(root->right, mp);
        
        mp[s]++;
        
        return s;
    }
    int dupSub(Node *root) {
         // code here
        unordered_map<string, int> mp;
        
        DFS(root, mp);
        
        for(auto &it:mp){
            if(it.second>=2) return 1;
        }
        return 0;
    }
};




