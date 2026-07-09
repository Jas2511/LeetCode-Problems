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
    bool isPalindrome(ListNode* head) {
        stack<int> stak;

        ListNode* curr = head;
        while (curr != NULL) {
            stak.push(curr->val);
            curr = curr->next;
        }
        ListNode* temp = head;
        while (temp != NULL) {
            if (stak.top() != temp->val) {
                return false;
            }
            temp = temp->next;
            stak.pop();
        }

        return true;
    }
};