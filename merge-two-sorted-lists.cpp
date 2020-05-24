// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/merge-two-sorted-lists/
// 
// #####------------------------##### \\

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        
        bool firstTime = true;
        int first, second, smallVal;

        ListNode* head = new ListNode();
        ListNode* ans;
        ans = head;
        
        while(l1 != NULL && l2 != NULL)
        {
            first = l1->val;
            second = l2->val;
            
            if(first < second)
            {
                smallVal = first;
                l1 = l1->next;
            }
            
            else
            {
                smallVal = second;
                l2 = l2->next;
            }
            
            if(firstTime)
            {
                head->val = smallVal;
                firstTime = false;
            }
            else
            {
                head->next = new ListNode(smallVal);
                head = head->next;
            }
        }
        
        if(l1 != NULL)
            head->next = l1;
        if(l2 != NULL)
            head->next = l2;
        
        return ans;
    }
};
