/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// I DID THIS ON MY OWN !!!!!!!!!
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        vector<vector<int>>ans_final;
        vector<int>arr;
         if(root == nullptr)
        {
            return ans_final;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!(q.empty()))
        {
            int size = q.size();
            arr.clear();
            for(int i=0 ;i<size ;i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left != nullptr)
                {
                    q.push(temp->left);
                }
                if(temp->right != nullptr)
                {
                    q.push(temp->right);
                }
                arr.push_back(temp->val);
            }
            ans_final.push_back(arr);
        }
        return ans_final;
        
    }
};
