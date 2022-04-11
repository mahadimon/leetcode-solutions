/*
https://leetcode.com/problems/remove-duplicates-from-sorted-list/

Test Case-1:
[1,2,3,4,4,5,5]
*/
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* curNode = head;
        while(curNode->next != NULL){
            if(curNode->val == curNode->next->val){
                curNode->next = curNode->next->next;
            }else{
                curNode = curNode->next;
            }
        }
        return head;
    }
};