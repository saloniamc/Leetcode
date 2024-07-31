/**               COMPLETELY REMOVING ALL DUPLICATE NODES
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* current = head;
        while(current)
        {
            bool hasDuplicates = false;

            while(current->next && current->val == current->next->val){
                hasDuplicates = true;
                current = current->next;
            }

            if(hasDuplicates){
                prev->next = current->next;
            }else{
                prev = prev->next;
            }

            current = current->next;
        }
        return dummy.next;
    }
};