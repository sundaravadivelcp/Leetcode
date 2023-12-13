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
    double ans = 0;

    pair<int, int> preorder(TreeNode* root){
        if(!root){
            return {0,0};
        }
        pair<int,int> left = preorder(root->left);
        pair<int,int> right = preorder(root->right);
        int sum = left.first + right.first + root->val;
        int num = left.second + right.second + 1;
        ans = max((double)sum/(double) num, ans);
        return {sum, num};
    }

    double maximumAverageSubtree(TreeNode* root) {
        preorder(root);
        return ans;
    }
};