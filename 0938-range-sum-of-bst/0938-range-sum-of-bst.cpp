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
    int dfs(TreeNode* root, int low, int high){
        if(root && root->val < low){
            return dfs(root->right, low, high);
        } else if(root && root->val > high){
            return dfs(root->left, low, high);
        } else if(root && root->val >= low && root->val <=high){
            return root->val + 
                dfs(root->left, low, high) + 
                dfs(root->right, low, high);
        }
        return 0;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = dfs(root, low, high);
        return sum;
    }
};