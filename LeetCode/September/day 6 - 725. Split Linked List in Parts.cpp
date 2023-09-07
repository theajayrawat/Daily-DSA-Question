// https://leetcode.com/problems/split-linked-list-in-parts/
// TC: O(N)
// SC: O(N)

class Solution
{
public:
    int countNode(ListNode *curr)
    {
        int size = 0;
        while (curr)
        {
            curr = curr->next;
            size++;
        }

        return size;
    }
    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {
        int N = countNode(head);

        int sizeOfPart = N / k;
        int extra = N % k;

        vector<ListNode *> v(k, NULL);

        for (int i = 0; i < k; i++)
        {
            int size = sizeOfPart;

            if (extra > 0)
            {
                size++;
                extra--;
            }

            v[i] = head;
            ListNode *prev = NULL;

            while (size--)
            {
                prev = head;
                head = head->next;
            }

            if (!prev)
                break;
            prev->next = NULL;
        }

        return v;
    }
};