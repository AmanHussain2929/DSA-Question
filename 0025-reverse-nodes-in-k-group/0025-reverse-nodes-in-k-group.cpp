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
    ListNode* reverseKGroup(ListNode* head, int k) {
         ListNode* newHead=NULL;
        ListNode* tail;
        ListNode* p;
        ListNode* temp=head;
        stack<ListNode*> st;
        while(temp!=NULL)
        {
            p=temp;
            temp=temp->next;
            p->next=NULL;
            st.push(p);
             if(st.size()==k)
             {
                  while(!st.empty())
                  {
                   p=st.top();
                   st.pop();
                   if(newHead==NULL)
                   {
                     newHead=tail=p;        
                   }
                   else
                    {
                     tail->next=p;
                     tail=p;  
                    }
                 
                  }
                 
                 
             }   //  st.size()==2;
            
            
        }// while loop
        stack<ListNode*> st2;
           while(!st.empty())
           {
               st2.push(st.top());
               st.pop();
           }
        while(!st2.empty())
        {
            p=st2.top();
            st2.pop();
             if(newHead==NULL)
                   {
                     newHead=tail=p;        
                   }
                   else
                    {
                     tail->next=p;
                      tail=p   ;
                    }
            
        }
        return newHead;
        
    }
};