/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */ // modified slow fast
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL)
            return NULL;
        
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *entry = head;
        
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast)  { // slow fast collide so there is cycle
                while (slow != entry){   // ab starting point ka check hoga slow aur entry collide toh starting point               
                    slow =  slow-> next; // slow lo wahi jaha tha wahi ek ek point aage move kro
                    entry = entry-> next; // entry ko head se ek ek point aage >> jaha collide wo starting point
                    
                }
                return entry;
            }
        }
       return NULL;
    }
};

/*
Brute force >> uses the sc > O(n)

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>s;
        ListNode* curr=head;
        while(curr!=NULL){
            if(s.find(curr)!=s.end()){
                return curr;
            }else{
                s.insert(curr);
                curr=curr->next;
            }
        }
        return NULL;
    }
};

*/