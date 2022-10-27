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
    
    void solve(TreeNode *root,vector<int> &v)
    {
        if(root==NULL)  return;
        v.push_back(root->val);
        solve(root->left,v);
        solve(root->right,v);
    }
    void flatten(TreeNode* root) {
        if(root==NULL || root->left==NULL && root->right==NULL) return;
        vector<int> v;
        solve(root,v);
               root->left=NULL;
              root->right=NULL;
         for(int i=1;i<v.size();i++)
         {
                TreeNode *newNode=new TreeNode(v[i]);    
                root->right=newNode;   
                root=newNode;
    
    }
    }
};