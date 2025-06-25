/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* node, unordered_map<Node*, Node*>&map)
    {
        Node* clone = new Node(node->val);
        map[node]=clone;
        for(Node* n : node->neighbors)
        {
        if(map.count(n))
        {
            clone->neighbors.push_back(map[n]);
        }
        else
        {
            clone->neighbors.push_back(dfs(n,map));
        }
        }
        return clone;
    }
    Node* cloneGraph(Node* node) {
      if(!node)return nullptr;
      unordered_map<Node*,Node*>map;
      return dfs(node,map);

    }
};