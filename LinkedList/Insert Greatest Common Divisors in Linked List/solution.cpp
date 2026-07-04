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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = temp1->next;
        int min_ele , max_pos;

        while(temp2 != nullptr)
        {
            min_ele = min(temp1->val , temp2->val);
            for(int i=1 ;i<=min_ele ;i++)
            {
                if(temp1->val % i==0 && temp2->val % i==0)
                {
                    max_pos = i;
                }
            }
            ListNode* newnode = new ListNode(max_pos);
            temp1->next = newnode;
            newnode->next = temp2 ;
            temp1 = temp2 ;
            temp2 = temp2->next;
        }
        return head;

        
    }
};
