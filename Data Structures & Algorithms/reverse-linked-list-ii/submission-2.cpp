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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0); //safety if head is reversed
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* curr = head;
        for(int i=1;i<left;i++){ //trying to find the node where it starts and the node before it called prev
            prev = curr;
            curr = curr->next;
        }
        ListNode* start = curr;
        curr = head;
        for(int i=1;i<right;i++) curr=curr->next;
        prev->next = curr;
        ListNode* end = curr->next;
        ListNode* prev2 = end;
        while(start!=end){
            ListNode* front = start->next;
            start->next = prev2;
            prev2 = start;
            start = front;
        }
        return dummy.next;
    }
};