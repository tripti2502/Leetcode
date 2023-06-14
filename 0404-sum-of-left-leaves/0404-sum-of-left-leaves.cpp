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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root == NULL)    
            return sum;
        
        queue<TreeNode*> q;
        q.push(root);
        //q.push(NULL);

        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            if(front == NULL){
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                if(front->left){
                    q.push(front->left);
                    TreeNode* left = front->left;
                    if(left->left == NULL && left->right == NULL)
                        sum += front->left->val;
                }
                if(front->right)
                    q.push(front->right);
            }
        }

        return sum;

    }
};