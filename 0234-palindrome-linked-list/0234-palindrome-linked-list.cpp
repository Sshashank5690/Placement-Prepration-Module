/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */  // reverse the ll and check for each
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode *rhead = NULL;
        ListNode *ptr = head;
        while(ptr!= NULL){
            ListNode *temp = new ListNode(ptr->val);
            temp -> next = rhead;
            rhead = temp;
            ptr = ptr -> next;
        }
        while(head && rhead){
            if(head-> val != rhead-> val){
                return false;
            }
            head=head-> next;
            rhead=rhead-> next;
        }
        return true;
    }
};