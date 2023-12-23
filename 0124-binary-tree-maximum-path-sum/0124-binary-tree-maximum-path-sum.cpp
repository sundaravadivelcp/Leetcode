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
    int ans = INT_MIN;

    int preorder(TreeNode* root){
        if(!root){
            return 0;
        }
        int left = max(preorder(root->left), 0);
        int right = max(preorder(root->right),0);
        ans = max(ans, left + right + root->val);
        return max(left + root->val,right + root->val);
    }

    int maxPathSum(TreeNode* root) {
        preorder(root);
        return ans;
    }
};