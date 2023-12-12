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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,map<int,multiset<int>>> nodes; //vertical,level,multinodes
        queue<pair<TreeNode*,pair<int,int>>> q; //node,vertical,level
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            TreeNode* node = p.first;
            int vdis = p.second.first; // vertical level
            int lvl = p.second.second; // horizontal level
            
            nodes[vdis][lvl].insert(node->val);
            if(node->left)
                q.push({node->left , {vdis-1 , lvl+1}});
            if(node->right)
                q.push({node->right , {vdis+1 , lvl+1}});
        }
        for(auto it : nodes){
            vector<int>res;
            for(auto x : it.second){
                for(auto y : x.second){
                    res.push_back(y);
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};