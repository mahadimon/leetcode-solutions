/*
https://leetcode.com/problems/linked-list-cycle/

Test Case-1:
[-21,10,17,8,4,26,5,35,33,-7,-16,27,-12,6,29,-12,5,9,20,14,14,2,13,-24,21,23,-21]
2

*/

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
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode* slow_p = head;
        ListNode* fast_p = head;
        //Floyd’s Cycle-Finding Algorithm 
        while(slow_p->next){
            slow_p = slow_p->next;
            if(fast_p->next == NULL || fast_p->next->next == NULL)
                return false;
            fast_p = fast_p->next->next;
            if(slow_p == fast_p){
                return true;
            }
        }
        return false;
    }
};