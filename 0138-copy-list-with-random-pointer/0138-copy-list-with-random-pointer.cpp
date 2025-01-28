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
    void connect(Node* head){
       // if(head == NULL) return NULL;
        Node* temp = head;
        while(temp != NULL){
            Node* nxtEle = temp->next;
            Node* nN = new Node(temp->val);
            temp->next = nN;
            nN->next = nxtEle;

            temp = nxtEle;
        }
    }
    void cNNrndmP(Node* head){
        if(head == NULL) return;
        Node* temp = head;
        while(temp != NULL){
            if(temp->random) temp->next->random = temp->random->next;
            else temp->next->random = NULL;

            temp = temp->next->next;
        }
    }
    Node* cNNall(Node* head){
        if(head == NULL) return NULL;
        Node* temp = head;
        Node* dummy =  new Node(-1);
        Node* res = dummy;
        while(temp != NULL){
            res->next = temp->next;
            temp->next = temp->next->next;

            res = res->next;
            temp = temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        connect(head);
        cNNrndmP(head);
        return cNNall(head);
    }
};