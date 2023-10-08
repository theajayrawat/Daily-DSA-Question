// https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
// TC: O(N)
// SC: O(1)

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        struct Node* newNode=new Node(data);
        //head
        if(head->data>=data){
            newNode->next=head;
            return newNode;
        }
        
        Node*prev=head;
        Node*curr=head->next;
            
        while(curr){
            if(curr->data>=data){
                newNode->next=curr;
                prev->next=newNode;
                return head;
            }
            prev=curr;
            curr=curr->next;
            
        }
        
        prev->next=newNode;
        
        return head;
        
    }
};