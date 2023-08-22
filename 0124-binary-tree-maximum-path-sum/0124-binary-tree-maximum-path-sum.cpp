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
    
    int f(TreeNode* root,int &maxD){
   if(root==NULL) return 0;
  int lh= max(0, f(root -> left, maxD));
  int rh = max(0, f(root -> right, maxD));
  int s = root -> val;
  maxD = max(maxD, (lh + rh) + s);
  return max(lh, rh) + s;
      }
public:
    int maxPathSum(TreeNode* root) {
        int maxD=INT_MIN;
       f(root,maxD);
       return maxD;
    }
};

