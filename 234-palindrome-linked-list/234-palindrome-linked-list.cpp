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
        stack<int> st;
      ListNode *fast=head;
      ListNode *slow=head;
        int count=0;
         while(head!=NULL)
        {
           head=head->next;
            count++;
        }
    
        while(fast!=NULL && fast->next!=NULL)
        {
            st.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
            
        } 
            if(count%2!=0)
            {
                st.push(slow->val);
            }
      while(st.empty()==false &&slow!=NULL)
      {
       if(slow->val!=st.top()) return false;
          st.pop();
          slow=slow->next;
      }
        return true;
    }
};