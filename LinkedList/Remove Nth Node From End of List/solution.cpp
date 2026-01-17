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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next == nullptr)
        {
            return nullptr;
        }
        
        int len=0;
        int k;
        ListNode*temp=head;
        ListNode*prev=nullptr;
        while(temp!=nullptr)
        {
            len++;
            temp=temp->next;
        }
        
        
        k=len-n+1;
        if(k==1)
        {
            head=head->next;
            return head;
        }
        temp=head;
        int count=0;
        while(temp!=nullptr)
        {
            count++;
            if(count==k)
            {
                prev->next = temp->next;
                return head;
            }
            
            prev=temp;
            temp=temp->next;
        }
        return nullptr;

        
    }
};
