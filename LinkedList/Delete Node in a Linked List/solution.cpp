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
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;
        vector<int>arr;
        while(temp!=nullptr)
        {
            arr.push_back(temp->val);
            temp = temp->next;

        }
        temp = node;
        int index =0;
        while(temp!=nullptr)
        {
            if(index == arr.size()-1)
            {
                 temp->val =arr[index];
                 temp->next = nullptr;
                 break;
            }
            temp->val =arr[index];
            index++;
            temp = temp->next;
        }
        
        
        
    }
};
