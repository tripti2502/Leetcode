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
    void f(TreeNode* root){
        if(root==NULL)
            return;
        mp[root->val]++;
        if(!root->right && !root->left){
            int odd=0;
            for(auto it:mp){
                if(it.second%2==1)
                odd++;
            }
            if(odd<=1) res++;
        }
        f(root->left);
        f(root->right);
        mp[root->val]--;
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        f(root);
        return res;
    }

private:
    map<int,int> mp;
    int res=0;
};