/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// floyd tortoise >> slow fast >> cycle detection
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // check if the linkedList is empty or only one node present in the linked List

        if(head == NULL || head->next == NULL)
            return false;

        // Now use the slow and fast pointer 
        // slow ---> one unit at a time
        // fast ---> two unit at a time


        ListNode *slow = head;
        ListNode *fast = head->next;


        while(slow!=fast)
        {
            if(fast == NULL || fast->next == NULL)
                return false;

            slow = slow->next;
            fast = fast->next->next;    
        }    

        return true;
    }
};