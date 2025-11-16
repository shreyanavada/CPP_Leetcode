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
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* nextnode;
        while(current != nullptr)
        {
            nextnode = current->next ;
            current->next = prev ;
            prev = current ;
            current = nextnode ;
        }
        return prev ; // prev holds the head value not current , current points to null at end .
    }
        
    
};
