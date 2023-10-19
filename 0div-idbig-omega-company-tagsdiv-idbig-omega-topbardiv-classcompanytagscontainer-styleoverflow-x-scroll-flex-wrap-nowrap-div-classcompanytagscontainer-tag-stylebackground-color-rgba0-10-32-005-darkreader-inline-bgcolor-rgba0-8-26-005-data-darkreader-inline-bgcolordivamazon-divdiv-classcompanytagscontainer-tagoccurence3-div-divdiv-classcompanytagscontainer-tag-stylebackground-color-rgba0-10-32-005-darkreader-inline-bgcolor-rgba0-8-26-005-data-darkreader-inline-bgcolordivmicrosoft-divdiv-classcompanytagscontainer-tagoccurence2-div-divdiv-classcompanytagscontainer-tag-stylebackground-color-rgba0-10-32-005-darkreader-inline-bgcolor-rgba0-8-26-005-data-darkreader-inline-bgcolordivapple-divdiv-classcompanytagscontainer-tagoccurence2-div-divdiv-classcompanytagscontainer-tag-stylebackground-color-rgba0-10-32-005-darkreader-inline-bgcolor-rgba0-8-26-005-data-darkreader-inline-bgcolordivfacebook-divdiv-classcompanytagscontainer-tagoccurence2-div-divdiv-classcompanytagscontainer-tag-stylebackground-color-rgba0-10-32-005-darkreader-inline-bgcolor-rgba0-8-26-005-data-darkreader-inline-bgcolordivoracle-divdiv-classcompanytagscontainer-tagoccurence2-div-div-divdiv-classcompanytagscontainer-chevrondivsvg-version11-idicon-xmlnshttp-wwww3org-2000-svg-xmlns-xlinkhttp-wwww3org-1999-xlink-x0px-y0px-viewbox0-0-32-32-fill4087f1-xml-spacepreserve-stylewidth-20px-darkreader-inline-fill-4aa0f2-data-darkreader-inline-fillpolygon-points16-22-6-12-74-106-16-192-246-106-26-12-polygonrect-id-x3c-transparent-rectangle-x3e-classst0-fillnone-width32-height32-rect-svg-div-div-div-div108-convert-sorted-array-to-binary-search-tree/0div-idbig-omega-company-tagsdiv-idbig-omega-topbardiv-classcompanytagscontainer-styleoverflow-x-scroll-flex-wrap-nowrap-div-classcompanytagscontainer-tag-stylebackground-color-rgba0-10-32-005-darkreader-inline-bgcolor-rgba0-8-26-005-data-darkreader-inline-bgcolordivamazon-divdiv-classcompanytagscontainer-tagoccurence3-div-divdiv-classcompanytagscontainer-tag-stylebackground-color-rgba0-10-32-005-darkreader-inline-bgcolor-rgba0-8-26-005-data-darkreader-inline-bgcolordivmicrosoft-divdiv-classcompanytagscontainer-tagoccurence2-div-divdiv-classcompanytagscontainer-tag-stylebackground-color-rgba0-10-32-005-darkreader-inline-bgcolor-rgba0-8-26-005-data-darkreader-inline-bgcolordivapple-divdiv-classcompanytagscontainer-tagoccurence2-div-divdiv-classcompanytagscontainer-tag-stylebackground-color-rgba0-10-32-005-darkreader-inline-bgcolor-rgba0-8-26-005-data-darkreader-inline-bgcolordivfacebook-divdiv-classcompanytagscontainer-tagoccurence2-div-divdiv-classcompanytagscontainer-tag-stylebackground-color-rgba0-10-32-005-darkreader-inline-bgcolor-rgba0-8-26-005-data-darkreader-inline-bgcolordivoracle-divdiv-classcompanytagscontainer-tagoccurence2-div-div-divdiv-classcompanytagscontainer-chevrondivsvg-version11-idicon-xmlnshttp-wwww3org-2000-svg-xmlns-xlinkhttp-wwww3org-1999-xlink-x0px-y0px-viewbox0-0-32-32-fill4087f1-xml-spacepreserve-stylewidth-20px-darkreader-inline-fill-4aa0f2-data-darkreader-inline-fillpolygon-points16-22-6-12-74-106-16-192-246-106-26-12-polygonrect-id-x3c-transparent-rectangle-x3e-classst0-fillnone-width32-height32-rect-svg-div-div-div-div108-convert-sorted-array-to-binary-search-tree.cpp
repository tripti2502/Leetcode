/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left,
 * };
 */
class Solution {
    TreeNode* f(vector<int>& nums, int start, int end){
      if(end<=start) return NULL; 
        int mid=(end+start)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=f(nums, start, mid);
        root->right=f(nums, mid+1,end);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return f(nums, 0,nums.size());
    }
};