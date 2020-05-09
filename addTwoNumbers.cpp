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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry;
        carry = (l1->val + l2->val)/10;
        ListNode* head = new ListNode((l1->val + l2->val) % 10);
        ListNode* end = head;
        l1 = l1->next;
        l2 = l2->next;
        
        while(l1 != NULL || l2 != NULL)
        {
            int a = 0, b = 0;
            
            if(l1 != NULL)
            {
                a = l1->val;
                l1 = l1->next;
            }
            
            if(l2 != NULL)
            {
                b = l2->val;
                l2 = l2->next;
            }
            
            end->next = new ListNode((a + b + carry) % 10);
            end = end->next;
            carry = (a + b + carry)/10;
        }
        
        if(carry > 0)
            end->next = new ListNode(carry);
        return head;
    }
};
