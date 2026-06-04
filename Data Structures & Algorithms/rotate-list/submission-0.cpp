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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;
        while(curr){
            curr=curr->next;
            count++;
        }
        k = k%count;
        if(!head || k==0) return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        curr = head;
        int n = count - k;
        while(n--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        dummy.next = curr;
        while(curr->next!=NULL) curr=curr->next;
        curr->next = head;
        return dummy.next;
    }
};