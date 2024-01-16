/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    TreeNode* parentA = NULL;
    TreeNode* childA = NULL;
    TreeNode* parentB = NULL;
    TreeNode* childB = NULL;
    bool leftA;
    bool leftB;

    
    void swap(TreeNode* a, TreeNode* b){
        TreeNode temp = TreeNode(a->val);
        temp.left = a->left;
        temp.right = a->right;
        a->val = b->val;
        a->left = b->left;
        a->right = b->right;
        b->val = temp.val;
        b->left = temp.left;
        b->right = temp.right;
    }
    
    void found(TreeNode* parent, TreeNode* child, bool left){
        if(!childA){
            parentA = parent;
            childA = child;
            leftA = left;
        }else{
            parentB = parent;
            childB = child;
            leftB = left;
        }
    }
    
    
    void checkNode(TreeNode *root){
        if(childA && childB){
            return;
        }
        
        if(root->left){
            if(root->left->val > root->val){
                found(root, root->left, true);
            }
            checkNode(root->left);
        }
        
        if(root->right){
            if(root->right->val < root->val){
                found(root, root->right, false);
            }
            checkNode(root->right);
        }
    }
    
    void recoverTree(TreeNode *root) {
        if(!root){
            return;
        }
        
        checkNode(root);
        
        if(!childA && !childB){
            return;
        }
        
        if(!childB){
            swap(childA, parentA);
            if(leftA){
                parentA->left = childA;
            }else{
                parentA->right = childA;
            }
            return;
        }

        if(parentA){
            if(leftA){
                parentA->left = childB;
            }else{
                parentA->right = childB;
            }
        }
        
        if(parentB){
            if(leftB){
                parentB->left = childA;
            }else{
                parentB->right = childA;
            }
        }
        
        
        swap(childA, childB);
    }
};