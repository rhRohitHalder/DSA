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
    ListNode *findMiddle(ListNode *head){
        if(head == NULL && head->next == NULL ) return head;
        ListNode *slow = head;
        ListNode *fast = head->next;
        while(fast != NULL && fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
//     ListNode* findMiddle(ListNode* head){
//     // If the list is empty or has only one node
//     // the middle is the head itself
//     if (head == nullptr || head->next == nullptr) {
//         return head;
//     }

//     // Initializing slow and fast pointers
//     ListNode* slow = head;
//     ListNode* fast = head->next;

//     // Move the fast pointer twice as fast as the slow pointer
//     // When the fast pointer reaches the end, the slow pointer
//     // will be at the middle
//     while (fast != nullptr && fast->next != nullptr) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     return slow;
// }
    ListNode *Merge(ListNode * l1 , ListNode *l2){
        ListNode *dummyNode = new ListNode(-1);
        ListNode *temp = dummyNode;

        while(l1 != NULL && l2 != NULL){
            if(l1->val >= l2->val){
                temp->next = l2;
                l2 = l2->next;
            }else{
                temp->next = l1;
                l1 = l1->next;
            }
            temp = temp->next;
        }
        if(l1 != NULL) temp->next = l1;
        else   temp->next = l2;

        return (dummyNode->next);
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL ) return head;
        ListNode *middle = findMiddle(head);
        ListNode *leftHead = head;
        ListNode *rightHead = middle->next;
        middle->next = NULL;

        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);
        return Merge(leftHead , rightHead);
    }
};