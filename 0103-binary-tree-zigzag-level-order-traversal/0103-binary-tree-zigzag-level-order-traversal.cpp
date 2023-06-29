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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
      vector<vector<int>> ans;
      if(!root) return {};
      queue<TreeNode*> q;
      q.push(root);
        
      while(!q.empty()){
          
        int size = q.size();
        vector<int>temp;
          
        for(int i = 0; i < size; i++){
          auto frontNode = q.front();    
              q.pop();
          temp.push_back(frontNode->val);
          if(frontNode->left) q.push(frontNode->left);
          if(frontNode->right) q.push(frontNode->right);
        }
        ans.push_back(temp);
      }
      for(int i = 0; i < ans.size(); i++){
        if(i % 2) reverse(ans[i].begin(), ans[i].end());
      }
      return ans;
    }
};