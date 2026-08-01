# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        head= ListNode(0)
        temp = head
        carry = 0 
        sum = 0
        while(l1 or l2 or carry ):
         sum = (l1.val if l1 else 0) + (l2.val if l2 else 0) + carry
         carry = sum // 10
         digit = sum % 10
         temp.next=ListNode(digit)
         temp=temp.next
         if l1:
            l1=l1.next
         if l2:
            l2=l2.next    
        return head.next

        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        