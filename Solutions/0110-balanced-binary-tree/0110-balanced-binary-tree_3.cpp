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
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left = height(root -> left);
        int right = height(root -> right);
        int ans = max(left, right) + 1;

        return ans;
    }
    
    bool isBalanced(TreeNode* root) {

        if(root == NULL){
            return true;
        }
        int left_Balance = isBalanced(root -> left);
        int right_Balance = isBalanced(root -> right);
        bool diff = abs(height(root -> left) - height(root -> right)) <= 1;
        if(left_Balance && right_Balance && diff){
            return true;
        }
        else{
            return false;   
        }
    }
};