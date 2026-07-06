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
    ListNode* reverseLL( ListNode* head)
    {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* nextnode ;
        while(temp != nullptr)
        {
            nextnode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextnode;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverseLL(head);
        ListNode* maxi_ptr = head ;
        ListNode* temp = head->next;
        while(temp != nullptr)
        {
            if(temp->val >= maxi_ptr->val)
            {
                maxi_ptr->next = temp;
                maxi_ptr = temp;
            }
            temp = temp->next;
        }
        maxi_ptr->next = nullptr;
        return reverseLL(head);
        
    }
};
// This is the optimal solution  , where TC : O(3n)           SC : O(1) .
