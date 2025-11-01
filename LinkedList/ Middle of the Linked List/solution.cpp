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
    ListNode* middleNode(ListNode* head) {  // easy problem just analyse before doing ....
        int lengthOfLL = 0;
        ListNode* temp = head ;
        while(temp != nullptr) {
            lengthOfLL ++;
            temp = temp->next;
        }
        int count = (lengthOfLL  / 2 ) + 1; // count holds the mid of the node which we need to return .
        ListNode* temp2 = head;
        int count2 = 0; // travese through the LL and increments .
        while( temp2 != nullptr )
        {
            count2 ++;
            if(count2 == count)
            {
                return temp2;
            }
            temp2 = temp2->next;
        }
        
        return 0;
    }
};
