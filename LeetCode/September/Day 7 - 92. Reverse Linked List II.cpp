// https://leetcode.com/problems/reverse-linked-list-ii/
// TC: O(N)
// SC: O(N)

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right || head==NULL||head->next==NULL)return head;
        if(left==1)return reverse(head,right-left);
        ListNode* node=head;
        int l=left-2;
        while(l>0&&l--){
            node=node->next;
        }
        node->next=reverse(node->next,right-left);
        return head;
    }
    ListNode* reverse(ListNode*head,int n){
        ListNode* prev=head;
        ListNode* curr=head->next;
        while(n--){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head->next=curr;
        return prev;
    }
};