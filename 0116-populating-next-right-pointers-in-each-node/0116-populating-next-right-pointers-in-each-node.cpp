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
        if(!root) return nullptr;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* r=nullptr;
            for(int i=q.size()-1;i>=0;i--)
            {
                   Node* n = q.front();q.pop();
                   n->next = r;
                   r = n;
                   if(n->right) q.push(n->right);
                   if(n->left) q.push(n->left);
            }
        }
        return root;
    }
};