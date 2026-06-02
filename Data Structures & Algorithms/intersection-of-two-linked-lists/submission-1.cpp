/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int len(ListNode* head){
        int count = 0;
        while(head){
            head=head->next;
            count++;
        }
        return count;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        /*ListNode* a = headA;
        ListNode* b = headB;
        while(a!=b){
            a = (a==NULL) ? headB : a->next;
            b = (b==NULL) ? headA : b->next;
        }
        return a;*/
        //this is one soln;
        int lena = len(headA);
        int lenb = len(headB);
        ListNode* a = headA;
        ListNode* b = headB;
        if(lena>lenb){
            int diff = lena-lenb;
            while(diff--) a=a->next;
        }
        if(lenb>lena){
            int diff = lenb-lena;
            while(diff--) b=b->next;
        }
        while(a){
            if(a==b) return a;
            a=a->next;
            b=b->next;
        }
        return a;
    }
};