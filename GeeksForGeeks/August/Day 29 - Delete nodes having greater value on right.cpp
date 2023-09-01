// Link:https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution
{
public:
    Node *compute(Node *head)
    {
        // your code goes here
        Node *dummy = new Node(-1);
        Node *curr = dummy;

        while (head)
        {
            Node *temp = head;

            while (temp->next)
            {
                if (temp->next->data > head->data)
                    break;
                temp = temp->next;
            }

            if (!temp->next)
            {
                curr->next = head;
                curr = curr->next;
            }

            head = head->next;
        }

        return dummy->next;
    }
};