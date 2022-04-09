/**
https://leetcode.com/problems/merge-two-sorted-lists/

Test Case-1:
[]
[]

Test Case-2:
[1,2,4]
[1,2,3]
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = new ListNode();
        ListNode *finalNode = head;
        
        if(list1 == NULL && list2 == NULL)
            return list1;
        if(list1 == NULL && list2 != NULL)
            return list2;
        if(list2 == NULL && list1 != NULL)
            return list1;
        
        if(list1->val < list2->val){
            finalNode->val = list1->val;
            list1 = list1->next;
        }else{
            finalNode->val = list2->val;
            list2 = list2->next;
        }
        
        while(list1 != NULL && list2 != NULL){
            finalNode->next = new ListNode();
            finalNode = finalNode->next;
            if(list1->val < list2->val){
                finalNode->val = list1->val;
                list1 = list1->next;
            }else{
                finalNode->val = list2->val;
                list2 = list2->next;
            }
        }
        while(list1 != NULL){
            finalNode->next = new ListNode();
            finalNode = finalNode->next;
            finalNode->val = list1->val;
            list1 = list1->next;
        }
        while(list2 != NULL){
            finalNode->next = new ListNode();
            finalNode = finalNode->next;
            finalNode->val = list2->val;
            list2 = list2->next;
        }
        return head;
    }
};