// https://leetcode.com/problems/linked-list-cycle/
// TC: O(N)
// SC: O(1)

while(head)
        {
            if(head->val == -100001) return true;
            head->val = -100001;
            head = head->next;
        }
        return false;