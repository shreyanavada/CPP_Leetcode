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
class Solution { // this is the first approach i came up with ....
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* nextnode ;
        while(temp != nullptr)
        {
            nextnode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextnode;
        }

        temp = prev ;
        vector<int>arr;
        arr.push_back(temp->val);
        temp= temp->next;
        int maxi = arr[0];
        while(temp!=nullptr)
        {
            if(temp->val >= maxi)
            {
                maxi = temp->val;
                arr.push_back(maxi);
            }
            temp = temp->next;
        }
        temp = prev ;
        reverse(arr.begin() , arr.end());
        for(int i=0 ;i<arr.size()-1 ;i++)
        {
            temp->val = arr[i];
            temp = temp->next;
        }
         temp->val = arr[arr.size()-1];
         temp->next = nullptr;
         return prev;
        
    }
};
