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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr )
        {
            return head;
        }
        if(head->next == nullptr  && head->val == val)
        {
            return nullptr;
        }
        if(head == nullptr )
        {
            return head;
        }
        
        while(head != nullptr)
        {
            if(head->val == val)
            {
                head = head->next ;
            }
            else
            {
                break ;
            }
        }
        ListNode* prev = nullptr;
        ListNode* temp = head;
        while(temp != nullptr)
        {
            
            if(temp->val == val)
            {
                prev->next = temp->next;
                temp = prev;
                
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
            
            
        }
        return head;

        
    }
};
