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

    ListNode* ll(ListNode* head, vector<int> hashTable)
    {
        
        while(head != nullptr)
        {
            if(hashTable[head->val] != 0)
            {
                head=head->next;
            }
            else
            {
                break;
            }
        }
        ListNode* temp = head ;
        ListNode* prev=nullptr;
        while(temp != nullptr)
        {
            if(hashTable[temp->val] != 0)
            {
                prev->next = temp->next;
                temp=prev;
            }
                prev=temp;
                temp=temp->next;
        }
        return head;

    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int>hashTable(100002);
        for(int i=0; i<nums.size() ;i++)
        {
            hashTable[nums[i]]++;
        }

        head = ll(head, hashTable);

        return head;
    }
    
};
