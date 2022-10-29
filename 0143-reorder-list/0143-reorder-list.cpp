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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        stack<ListNode*> st;
         while(fast && fast->next)
         {
             slow=slow->next;
             fast=fast->next->next; 
         }
       ListNode* k=slow;
        slow=slow->next;
        k->next=NULL;
        while(slow)
        {
            st.push(slow);
            slow=slow->next;
        }
        ListNode* t=head;
        ListNode* next;
         
        while(!st.empty())
        {
         k=st.top();
         st.pop();
        k->next=t->next;
            t->next=k;
         t=t->next->next;
        }
               
    }
};