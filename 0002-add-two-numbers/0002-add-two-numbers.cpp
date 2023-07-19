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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1; // pointer to traverse l1
        ListNode* ptr2 = l2; // pointer to traverse l2
        ListNode* head = l1; // pointer to the head of the result linked list, initially set to the head of l1
        int sum = 0, carry = 0; // initialize sum and carry to 0
        int num1 = 0, num2 = 0; // initialize num1 and num2 to 0
        
        // traverse both linked lists simultaneously until at least one of them is not empty
        while (ptr1 || ptr2) {
            if (ptr1) { // if ptr1 is not null, set num1 to its value and move ptr1 to the next node
                num1 = ptr1->val;
                ptr1 = ptr1->next;
            }
            if (ptr2) { // if ptr2 is not null, set num2 to its value and move ptr2 to the next node
                num2 = ptr2->val;
                ptr2 = ptr2->next;
            }
            sum = num1 + num2 + carry; // calculate sum
            carry = sum / 10; // calculate carry
            sum = sum % 10; // calculate sum
            
            ListNode* n = new ListNode(sum); // create a new node with sum as its
            l1->next=n;
            l1=l1->next;
            num1=0,num2=0,sum=0;
        }
        if(carry){
            ListNode* n = new ListNode(carry);
            l1->next=n;
            l1=l1->next;
        }
        return head->next;
    }
};