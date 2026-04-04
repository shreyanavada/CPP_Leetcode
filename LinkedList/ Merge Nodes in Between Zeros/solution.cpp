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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p1 = head ; //  this pointer is note the place to put the sum .
        ListNode* p2 = head->next; // this pointer to traverse the LL
        int sum = 0 ;
        while(p2 != nullptr)
        {
            if(p2->val != 0)
            {
                sum += p2->val;
            }
            else
            {
                p1->val = sum ;
                sum = 0;
                if(p2->next != nullptr)
                {
                p1 = p1->next;
                }
            }
            p2 = p2->next;
        }
        p1->next = nullptr;
        return head;

        
        
    }
};
