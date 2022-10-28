/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
         queue<Node *> que;
    int added;
    int i,j,k;
    Node *t;
    if(root==NULL) return root;
    que.push(root);
    added=1;
    while(!que.empty())
    {
    j=0;
    t=que.front();
    que.pop();
    added--;
    if(t->left)
    {
    que.push(t->left);
    j++;
    }
    if(t->right)
    {
    que.push(t->right);
    j++;
    }
    for(i=1;i<=added;i++)
    {
    t->next=que.front();
    t=que.front();
    que.pop();
    if(t->left)
    {
    que.push(t->left);
    j++;
    }
    if(t->right)
    {
    que.push(t->right);
    j++;
    }
    } // for ends here
    added=j;    
    } // while ends here
    return root;
    }
};