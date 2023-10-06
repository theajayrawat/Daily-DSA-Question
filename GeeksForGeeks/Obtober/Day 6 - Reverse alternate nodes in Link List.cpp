// https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/1
// TC: O(N)
// SC: O(1)

class Solution
{
    public:
       struct Node* reverseList(struct Node *head)
    {
       
       Node *prev=NULL;
        Node *curr=head;
       
        while(curr!=NULL)
        {
             Node *next=curr->next;
             curr->next=prev;
             
             prev=curr;
             curr=next;
        }
        return prev;
    }
    
    void rearrange(struct Node *odd)
    {
        Node *curr1=odd;
        Node *curr2=odd->next;
        Node *c=odd->next;
         
        while(curr1!=NULL && curr2!=NULL&&curr1->next!=NULL &&curr2->next!=NULL)
        {
            curr1->next=curr2->next;
            curr1=curr1->next;
            curr2->next=curr1->next;
            curr2=curr2->next;
        }
        struct Node* d=reverseList(c);
        curr1->next=d;
    }
};
