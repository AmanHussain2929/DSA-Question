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
    ListNode* insertionSortList(ListNode* head) {
      vector<int>v;
      ListNode* t=head;
       while(t)
       {
            v.push_back(t->val);
           t=t->next;
       }
        int i=0;
        t=head;
        sort(v.begin(),v.end());
          while(t)
       {
             t->val=v[i];
           t=t->next;
              i++;
       }
        return head;
    }
};