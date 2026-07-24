/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            n++;
            temp = temp->next;
        }
        if (n == 1) {
            return NULL;
        }
        n = n / 2;

        int i = 1;
        temp = head;
        while (i < n) {

            temp = temp->next;
            i++;
        }
        ListNode* del = temp->next;
        temp->next = del->next;
        delete del;
        return head;
    }
};