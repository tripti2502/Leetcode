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
    
    int findPosition(vector<int>&inorder,int element){
        int n=inorder.size();
    for(int i=0; i<n; i++){
        if(inorder[i]==element)
            return i;
    }
        return -1;
    }
    
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int &index, int inorderStart, int inorderEnd){
        int n=preorder.size();
        if(index>=n || inorderStart>inorderEnd) return NULL;
        int element=preorder[index++];
        TreeNode* temp= new TreeNode(element);
        
        int position=findPosition(inorder,element);
        temp->left=solve(preorder,inorder,index,inorderStart,position-1);
        temp->right=solve(preorder,inorder,index,position+1,inorderEnd);
        
        return temp;
        
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        int preorderIndex=0;
        TreeNode* ans=solve(preorder, inorder,preorderIndex,0,n-1 );
        return ans;
    }
};