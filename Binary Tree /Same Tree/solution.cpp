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
class Solution {
public:
    void preorder (TreeNode* root , vector<string>&arr)
    {
        if(root !=nullptr)
        {
        arr.push_back(to_string(root->val));
        preorder(root->left ,arr);
        preorder(root->right ,arr);
        }
        else
        {
            arr.push_back("null");
        }
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
       vector<string>ans1;
       preorder(p,ans1);
       vector<string>ans2;
        preorder(q,ans2);
        if(ans1 == ans2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
