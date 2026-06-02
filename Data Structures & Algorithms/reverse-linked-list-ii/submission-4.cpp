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
        ListNode* start_1 = &dummy;
        ListNode* curr = head;
        for(int i=1;i<left;i++){ //trying to find the node where it starts and the node before it called prev
            start_1 = curr;
            curr = curr->next;
        }
        ListNode* start = curr;
        curr = head;
        for(int i=1;i<right;i++) curr=curr->next;//finding the right node where prev shld point
        start_1->next = curr;  //this is the end
        ListNode* end_1 = curr->next; //keep the node after the end
        ListNode* prev2 = end_1;  //point starting node to end bec thats how it shld be
        while(start!=end_1){
            ListNode* front = start->next;  //reverse the linked list, everything is in position
            start->next = prev2;
            prev2 = start;
            start = front;
        }
        return dummy.next;  //return head
    }
};