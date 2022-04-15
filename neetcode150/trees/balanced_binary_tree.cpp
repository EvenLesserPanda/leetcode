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
    pair<bool, int> checkBalance(TreeNode* root)
    {
        if(!root)
            return {true, 0};
        pair<bool, int> left = checkBalance(root->left);
        pair<bool, int> right = checkBalance(root->right);
        
        bool lfirst = left.first;
        bool rfirst = right.first;
        
        int lsecond = left.second;
        int rsecond = right.second;
        
        pair<bool, int> ans;
        
        int diff = abs(lsecond - rsecond);
        
        if(lfirst && rfirst && (diff <= 1))
            ans.first = true;
        else
            ans.first = false;
        
        ans.second = max(lsecond, rsecond) + 1;
        
        return ans;
    }
    
    bool isBalanced(TreeNode* root) {
        return checkBalance(root).first;
    }
};
