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
        if(head == NULL) return NULL;
        unordered_map<Node*, Node*> mp;
        Node* temp = head;
        //Node* newHead = new Node(head->val);
        //mp[head] = newHead;

        while(temp != NULL){
            Node* newNode = new Node(temp->val);
            mp[temp] = newNode;
            temp = temp->next;
           
        }
        temp = head;
        while(temp != NULL){
            Node* copy = mp[temp];
            copy->next = mp[temp->next];
            copy->random = mp[temp->random];

            temp = temp->next;
        }
        return mp[head];
    }
};