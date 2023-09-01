// Link:https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
// Time Complexity: O(N)
// Space Complexity: O(1)

Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* ans=head;
    if(x==1){
        return head->next;
    }
    while(head->next){
        if(x==2){
            Node*temp=head->next;
            head->next=head->next->next;
            delete(temp);
            break;
        }
        head=head->next;
        x--;
    }
    
    return ans;
}