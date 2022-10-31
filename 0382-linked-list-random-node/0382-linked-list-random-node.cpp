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
    vector<int>v;
    Solution(ListNode* head) {
         ListNode* t;
        for(t=head;t!=NULL;t=t->next) v.push_back(t->val);
    }
    
    int getRandom() {
      int size=v.size();
    int n=rand();
    if(n<0) n=n*(-1);
    return v[n%size];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */