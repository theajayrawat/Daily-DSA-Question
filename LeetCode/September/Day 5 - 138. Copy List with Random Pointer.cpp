// https://leetcode.com/problems/copy-list-with-random-pointer/
// TC: O(N)
// SC: O(1)

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        Node *curr = head;

        while (curr)
        {
            Node *copyNode = new Node(curr->val);
            Node *nextNode = curr->next;
            curr->next = copyNode;
            copyNode->next = nextNode;
            curr = nextNode;
        }

        curr = head;
        while (curr)
        {
            Node *nextNode = curr->next;
            if (curr->random)
                nextNode->random = curr->random->next;
            curr = nextNode->next;
        }

        Node *dummy = new Node(-1);
        Node *temp = dummy;

        while (head)
        {
            Node *nextHead = head->next->next;
            temp->next = head->next;
            head->next = nextHead;
            temp = temp->next;
            head = nextHead;
        }

        return dummy->next;
    }
};