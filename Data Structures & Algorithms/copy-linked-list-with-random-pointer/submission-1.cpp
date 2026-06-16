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
        if(!head) return NULL;

        unordered_map<Node*, Node*> mp;
        Node* curr = head;

        while(curr){
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        curr = head;

        while(curr){
            mp[curr]->next = mp[curr->next];
            mp[curr]->random = mp[curr->random];
            curr = curr->next;
        }

        return mp[head];
    }
};

/*
class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(!head) return NULL;

        // Step 1: Insert copies
        Node* curr = head;

        while(curr){
            Node* copy = new Node(curr->val);

            copy->next = curr->next;
            curr->next = copy;

            curr = copy->next;
        }

        // Step 2: Set random pointers
        curr = head;

        while(curr){

            if(curr->random)
                curr->next->random = curr->random->next;

            curr = curr->next->next;
        }

        // Step 3: Separate lists
        curr = head;

        Node* copyHead = head->next;

        while(curr){

            Node* copy = curr->next;

            curr->next = copy->next;

            if(copy->next)
                copy->next = copy->next->next;

            curr = curr->next;
        }

        return copyHead;
    }
};
*/
