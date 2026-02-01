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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=0;
        ListNode* temp = list1;
        ListNode* prev=nullptr;
        ListNode* prev1;
        ListNode* after;
        while(temp!=nullptr)
        {
            if(count==a)
            {
                prev->next = nullptr;
                prev1 = prev;
                

            }
            if(count==b)
            {
                
                after = temp->next;
                temp->next=nullptr;
                break;
            }
            prev=temp;
            temp=temp->next;
            count++;
        }
        temp=list2;
        ListNode* lastnodeoflist2;
        while(temp->next!=nullptr)
        {
            temp = temp->next;
        }
        lastnodeoflist2 =temp;

        
       
        prev1->next = list2;
        lastnodeoflist2->next=after;
        return list1;

        
    }
};
