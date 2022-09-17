/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int sum=0;
    if(root==NULL) return 0;
    queue<TreeNode *> que;
    que.push(root);
   TreeNode* t;
    while(que.size())
    {
        int ic=que.size(); 
        sum=0;
        for(int i=0;i<ic;i++)
        {
            t=que.front();
            que.pop();
            sum+=t->val;
            if(t->left) que.push(t->left);
            if(t->right) que.push(t->right);
        }
    }    
    return sum;
    }
};