/*
https://leetcode.com/problems/remove-linked-list-elements/
Test Case-1:
[]
1

Test Case-2:
[7,3,4,5]
7
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prevNode = head;
        ListNode* curNode = head;
        if(head == NULL)
            return head;
        
        while(curNode != NULL){
            if(val == curNode->val)
                prevNode->next = curNode->next;
            else
                prevNode = curNode;
            curNode = curNode->next;
        }
        
        if(head->val == val)
            head = head->next;
        
        return head;
    }
};