/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
        Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> map;
        Node* i = head;
        while(i) {
            map[i] = new Node(i->val);
            i=i->next;
        }
        i = head;
        while(i) {
            map[i]->next = map[i->next];
            map[i]->random = map[i->random];
            i = i->next;
        }
        return map[head];
    }
};
