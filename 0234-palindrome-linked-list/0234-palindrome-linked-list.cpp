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
        int count=0;
        ListNode* temp=head;
        while(temp)
        {
           count++;
            temp=temp->next;
        }
       ListNode* slow=head;
        ListNode* fast=head;
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
          while(!st.empty() && slow!=NULL)
          {
            if(slow->val!=st.top()) return false;
              st.pop();
              slow=slow->next;
          }
        
        
       return true;  
        
    }
};