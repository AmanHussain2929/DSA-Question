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
    int getDecimalValue(ListNode* head) { 
      int num=0;
    ListNode *t;
    for(t=head;t!=NULL;t=t->next)
    {
    num=num<<1;
    if(t->val==1) num=num|1;
    }
    return num;
    }
};