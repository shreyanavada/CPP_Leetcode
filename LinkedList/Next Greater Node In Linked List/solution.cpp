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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
      
        while(temp1 != nullptr)
        {
            if(temp1->next == nullptr)
            {
                arr.push_back(0);
                return arr;
            }
           
            temp2 = temp1->next;
            while(temp2 != nullptr)
            {

            if(temp1->val < temp2->val)
            {
               arr.push_back(temp2->val);
               break;
            }
            if(temp2->next == nullptr && temp2->val<=temp1->val)
            {
                arr.push_back(0);
                break;
            }
            temp2 = temp2->next ; 
            }
           
            temp1 = temp1->next;
            


        }
        return arr;
    }
};
