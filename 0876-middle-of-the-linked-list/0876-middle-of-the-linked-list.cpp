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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        vector<int> data;
        while (curr != NULL) {
            data.push_back(curr->val);
            curr = curr->next;
        }
        int idx = 0;
        if (data.size() % 2 != 0) {
            idx = ((data.size() + 1) / 2);
        } else
            idx = (data.size() / 2) + 1;

        curr = head;
        int count = 1;
        while (curr != NULL) {
            if (count == idx) {

                break;
            }
            count++;
            curr = curr->next;
        }
        return curr;
    }
};