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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        int rev=k%count;
        if(rev==0) return head;
        rev=count-rev;
        ListNode* t=head;
        int i=0;
        ListNode* p2=t;
        while(t!=NULL && i<rev )
        { 
              p2=t;
             t=t->next;
            i++;
        }  
        p2->next=NULL;
        ListNode* p=t;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=head;
      
        return t;
        
    }
};