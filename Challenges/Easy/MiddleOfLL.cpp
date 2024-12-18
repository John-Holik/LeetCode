/*Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

My Solution:  */

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

class Solution{
public:
    ListNode *middleNode(ListNode *head){
        ListNode *temp = head;
        ListNode *fast = head;
        while (fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            temp = temp->next;
        }
        return temp;
    }
};