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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int si=q.size();
            vector<int>level;
            for(int i=0;i<si;i++){
                TreeNode *l= q.front();
                q.pop();
                if(l->left!=NULL)q.push(l->left);
                if(l->right!=NULL)q.push(l->right);
                level.push_back(l->val);
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};