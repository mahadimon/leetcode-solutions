/*
https://leetcode.com/problems/reverse-linked-list/

Test Case-1:
[1,2,3,4,5]

Test Case-2:
[1,2]
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* prevNode = NULL;
        ListNode* curNode = head;
        ListNode* nextNode = NULL;
        
        while(curNode != NULL){
            nextNode = curNode->next;
            curNode->next = prevNode;
            prevNode = curNode;
            curNode = nextNode;
        }
        return prevNode;
    }
};