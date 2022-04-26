// // Space Complexity: O(h), h is the height of the tree
// // Time Complexity: O(n), n is the total number of nodes in the binary tree

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* invertTree(TreeNode* root) {
//         if(!root)
//             return root;
//         swap(root->left, root->right);
        
//         invertTree(root->left);
//         invertTree(root->right);
        
//         return root;
//     }
// };

// Space Complexity: O(n) for storing nodes present in any level of the binary tree
// Time Complexity: O(n), n is the total number of nodes in the binary tree

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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return nullptr;
        stack<TreeNode*> storage;
        storage.push(root);
        while(!storage.empty())
        {
            TreeNode* ptr = storage.top();
            storage.pop();
            if(!ptr)
                continue;
            swap(ptr->left, ptr->right);
            storage.push(ptr->left);
            storage.push(ptr->right);
        }
        
        return root;
    }
};
