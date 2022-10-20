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
        head=prevNode;
      return head;
    }
};