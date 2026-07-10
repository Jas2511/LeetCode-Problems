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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        if (list1 == NULL && list2 == NULL) {
            return list1;
        }
        ListNode* temp = new ListNode();

        ListNode* head;
        head = temp;

        while (temp1 != NULL || temp2 != NULL) {

            if (temp1 == NULL) {
                while (temp2 != NULL) {
                    temp->next = new ListNode(temp2->val);
                    temp = temp->next;
                    temp2 = temp2->next;
                }
            }
            if (temp2 == NULL) {
                while (temp1 != NULL) {
                    temp->next = new ListNode(temp1->val);
                    temp = temp->next;
                    temp1 = temp1->next;
                }
            } else {
                {
                    if (temp1->val < temp2->val) {

                        temp->next = new ListNode(temp1->val);
                        temp = temp->next;
                        temp1 = temp1->next;

                    }

                    else if (temp1->val > temp2->val) {
                        temp->next = new ListNode(temp2->val);
                        temp = temp->next;
                        temp2 = temp2->next;

                    } else if (temp1->val == temp2->val) {

                        temp->next = new ListNode(temp1->val);
                        temp = temp->next;
                        temp->next = new ListNode(temp2->val);
                        temp = temp->next;
                        temp1 = temp1->next;
                        temp2 = temp2->next;
                    }
                }
            }
        }

        return head->next;
    }
};