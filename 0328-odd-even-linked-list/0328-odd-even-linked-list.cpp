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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* oddHead=NULL;
        ListNode* evenHead=NULL;
        ListNode* oddTail;
        ListNode* evenTail;
        ListNode* k;
        ListNode* t=head;
        bool turn=true;
        while(t)
        { 
            k=t;
            t=t->next;
            k->next=NULL;
            if(turn)
            {
                if(oddHead==NULL)
                {
                oddHead=oddTail=k; 
                }
                else
                {
                   oddTail->next=k;
                    oddTail=k;
                }
             turn=!turn;   
            } 
            else
            {
                 if(evenHead==NULL)
                {
                evenHead=evenTail=k; 
                }
                else
                {
                   evenTail->next=k;
                    evenTail=k;
                }
           turn=!turn;   
            }
         
        }
        oddTail->next=evenHead;
        return oddHead;
        
    }
};