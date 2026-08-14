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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> h(right - left, 0);
        if (right - left == 0) {
            return head;
        }
        int i = 1;
        ListNode* temp = head;
        while (i <= right) {

            if (i >= left && i <= right) {
                h.push_back(temp->val);
            }

            i++;
            temp = temp->next;
        }
        reverse(h.begin(), h.end());
        temp = head;
        i = 1;
        int j = 0;
        while (i <= right) {
            if (i >= left && i <= right) {
                temp->val = h[j];
                j++;
            }

            temp = temp->next;
            i++;
        }
        return head;
    }
};