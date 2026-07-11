/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* curr = head;

        int i = 0;

        if (curr == NULL) {
            return false;
        }
        while (curr != NULL && i <= 10000) {
            curr = curr->next;

            if (curr == NULL) {
                return false;
            }
            i++;
        }

        return true;
    }
};