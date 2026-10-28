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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* prev =NULL;
        ListNode* temp=head;
        ListNode* nextptr=NULL;
        while(temp!=NULL){
            //temp k baad wala address store
            nextptr=temp->next;
              //linking to previous node
            temp->next=prev;
            
            prev =temp;
            temp=nextptr;
            
            
        }
        
        return prev;
    }
};