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
    ListNode* reverse(ListNode* head)
    {
        struct ListNode *prevNode,*nextNode,*currNode;
        prevNode=NULL;
        currNode=nextNode=head;
        while(nextNode!=NULL)
        {
           nextNode=nextNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
     return prevNode;
    }
    bool isPalindrome(ListNode* head) {
       ListNode* slow=head;
        ListNode* fast=head;
        int count=0;
        ListNode* temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        while (fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(count%2!=0)  slow=slow->next;
        slow=reverse(slow);
        ListNode* t=head;
        while(slow!=NULL)
        {
            if(t->val!=slow->val) return false;
            slow=slow->next;
            t=t->next;    
        }
        return true;
        
    }
};