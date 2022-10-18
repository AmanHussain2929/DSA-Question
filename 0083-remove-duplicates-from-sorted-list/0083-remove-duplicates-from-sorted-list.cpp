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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t = head;
ListNode* ans = head;
if(head==NULL)
return head;
while(t!=NULL)
{
if(head->val != t->val)
{
head->next = t;
head = head->next;
}
t = t->next;
}
head->next = NULL;
return ans;
    }
};