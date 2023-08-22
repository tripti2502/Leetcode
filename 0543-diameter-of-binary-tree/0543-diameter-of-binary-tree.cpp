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
      int func(TreeNode* root,int &maxD){
          if(root==NULL) return 0;
          int l=func(root->left,maxD);
          int r=func(root->right,maxD);
          maxD=max(maxD,l+r);
          return max(l,r)+1;;

      }
public:
    int diameterOfBinaryTree(TreeNode* root) {
       int maxD=0;
       func(root,maxD);
       return maxD;
    }
};

