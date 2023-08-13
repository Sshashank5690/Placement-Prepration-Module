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
    bool isPalindrome(ListNode* head) {
        // finding the middle using the slow fast
        ListNode *slow = head, *fast = head;
        while(fast!=NULL && fast->next != NULL){
            slow= slow-> next;
            fast = fast -> next -> next;
        }
        // ek case >> if no of nodes are odd then move slow to one point
        if(fast != NULL && fast->next ==NULL){
            slow = slow -> next;
        }
        //reverse thr end half
        ListNode *temp = NULL;
        ListNode *prev = NULL;
        while(slow != NULL && slow->next!=NULL){
            temp=slow->next;
            slow->next=prev;
            prev= slow;
            slow= temp;
        }
        if(slow!=NULL){
            slow->next = prev;
        }
        // compare the start and end half
        fast = head;  // fast konstart mai le aao ki comare kar pao
         while(slow && fast){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};