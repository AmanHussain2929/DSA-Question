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
    ListNode* reverseList(ListNode* head) {
          if(head==NULL || head->next==NULL)
          {
              return head;
          }
        struct ListNode *newHead=reverseList(head->next);
        struct ListNode *nextNode=head->next;
        nextNode->next=head;
        head->next=NULL;
        return newHead;
    }
};