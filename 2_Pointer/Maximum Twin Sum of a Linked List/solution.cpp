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
    int pairSum(ListNode* head) {
        vector<int>arr;
        ListNode* temp = head;
        while(temp!=nullptr)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n =arr.size();
        int maxi = INT_MIN;
        int sum;
        for(int i=0 ;i<arr.size() ;i++)
        {
            if(i>=0 && i<=(n/2)-1)
            {
                sum=arr[i]+arr[n-1-i];
                maxi = max(sum,maxi);
            }
        }
        return maxi;
        
    }
};
