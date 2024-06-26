class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        ListNode head;
        ListNode* pHead = &head;
        while(l1 || l2)
        {
            int value = carry + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            carry = value / 10;
            pHead -> next = new ListNode(value % 10);
            pHead = pHead->next;

            if(l1)
            {
                l1 = l1->next;
            }
            if(l2)
            {
                l2 = l2->next;
            }
        }

        if(carry)
        {
            pHead->next = new ListNode(carry);
        }

        return head.next;
    }
}