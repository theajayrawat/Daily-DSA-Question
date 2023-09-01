// https://practice.geeksforgeeks.org/problems/leftmost-and-rightmost-nodes-of-binary-tree/1
// TC: O(N)
// SC: O(N)

void printCorner(Node *root)
{

// Your code goes here
        queue<Node*>q;
        if(root==NULL)
            return;

        q.push(root);

        while(!q.empty())
        {
            int qSize=q.size();
            if(qSize>1)cout<<q.front()->data<<" ";
            while(qSize--)
            {
                Node*temp=q.front();
                q.pop();
                if(qSize==0)
                    cout<<temp->data<<" ";
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }

}