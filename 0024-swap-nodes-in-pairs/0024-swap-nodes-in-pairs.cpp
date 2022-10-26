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
    ListNode* swapPairs(ListNode* head) {
        ListNode* newHead=NULL;
        ListNode* tail;
        ListNode* k;
        ListNode* temp=head;
        stack<ListNode*> st;
        while(temp!=NULL)
        {
            k=temp;
            temp=temp->next;
            k->next=NULL;
            st.push(k);
             if(st.size()==2)
             {
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
                 
                 
             }   //  st.size()==2;
            
            
        }// while loop
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
                      tail=k   ;
                    }
            
        }
        return newHead;
    }
};