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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      if(head==NULL) return head;
         ListNode* newHead=NULL;
         ListNode* tail;
         ListNode* t=head;
         ListNode* k;
        int size=right-left+1;
        int i=1;
        stack<ListNode*> st;
        while(i<left)
        {
             k=t;
             t=t->next;
             k->next=NULL;
            if(newHead==NULL) 
            {
                newHead=tail=k;
            }
            else
            {
              tail->next=k;
                tail=k;
            }
         i++;       
        } // while
       for(int i=1;i<=size;i++)
       {
           k=t;
           t=t->next;
           k->next=NULL;
             st.push(k);
       } // for
         while(!st.empty())
         {
             k=st.top();
             st.pop();
             if(newHead==NULL) 
            {
                newHead=tail=k;
            }
            else
            {
              tail->next=k;
                tail=k;
            }
                                        
          }
                     tail->next=t;
                     
            
        return newHead;
        
    }
};
        