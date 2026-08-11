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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return head;
        if(!head || k<=1) return head;
        int c=0;
        ListNode* node=head;
        while(node && c<k){
            node=node->next;
            c++;
        }
        if(c<k){
            return head;
        }
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* nxt=NULL;
        c=0;
        while(cur!=NULL && c<k){
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
            c++;
        }
        head->next=reverseKGroup(cur,k);
        return prev;
    }
};
