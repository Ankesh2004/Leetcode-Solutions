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
    ListNode* swapPairs(ListNode* head) {
        // If the list has 0 or 1 nodes, it is already swapped
        if (!head || !head->next) {
            return head;
        }
        
        // Swapping the first two nodes
        ListNode* newHead = head->next;
        head->next = newHead->next;
        newHead->next = head;
        
        //swapping pairs
        ListNode* prev = head;
        ListNode* curr = head->next;
        while (curr && curr->next) {
            ListNode* next = curr->next;
            prev->next = next;
            curr->next = next->next;
            next->next = curr;
            prev = curr;
            curr = curr->next;
        }
        
        return newHead;
    }
};
