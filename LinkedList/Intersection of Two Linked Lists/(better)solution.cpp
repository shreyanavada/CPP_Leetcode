/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    unordered_map<ListNode* , int>m; // using map to store the occurance of node .
    ListNode*temp = headA;
    while(temp!=nullptr)
    {
        auto it = m.find (temp);
        if(it!=m.end())
        {
            return temp;
        }
        m[temp]=1;
        temp=temp->next;
    }
    temp = headB;
    while(temp!=nullptr)
    {
        auto it = m.find (temp);
        if(it!=m.end())
        {
            return temp;
        }
        m[temp]=1;
        temp=temp->next;
    }
    return nullptr;
        
    }
};
