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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *temp = root;
        
        while(true){
            if(root == nullptr){
               root = new TreeNode(val);
               break;
            }
            if(val < temp->val){
                if(temp->left == nullptr){
                    temp->left = new TreeNode(val);
                    break;
                }else{
                    temp = temp->left;
                    continue;
                }
            }
            else{
                if(temp->right == nullptr){
                    temp->right = new TreeNode(val);
                    break;
                }else{
                    temp = temp->right;
                    continue;
                }
            }
        }
      return root;
    }
};
