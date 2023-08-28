// Link:https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
// Time Complexity: O(N)
// Space Complexity: O(1)

Node *removeDuplicates(Node *head)
{
 // your code goes here
    Node*curr=head;
    while(head->next){
        if(head->data==head->next->data){
            if(head->next->next){
                head->next=head->next->next;
            }
            else{
                head->next=NULL;
            }
        }
        else
            head=head->next;
    }
    
    return curr;
}