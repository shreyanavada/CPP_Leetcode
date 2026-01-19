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
    ListNode* reversee(ListNode* temp)
    {
        ListNode* prev=NULL;
        while(temp!=nullptr)
        {
        ListNode* front=temp->next;
        
        temp->next=prev;
        prev=temp;
        temp=front;
        }
        return prev;

    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
            return true;
        }
        ListNode* slow=head;
        ListNode* fast =head;
        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

        }
        ListNode* newhead=reversee(slow->next);
        ListNode*first=head;
        ListNode* sec=newhead;
        while(sec!=nullptr)
        {
            if(first->val == sec->val)
            {
                first=first->next;
                sec=sec->next;
            }
            else
            {
                reversee(newhead);
                return false;
            }
        }
        reversee(newhead);
        return true;

        
    }
};
