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
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            int s=q.size();
            i++;
            vector<int>level;
            for(int i=0;i<s;i++){
                TreeNode *l=q.front();
                q.pop();
                if(l->left!=NULL)q.push(l->left);
                if(l->right!=NULL)q.push(l->right);
                level.push_back(l->val);
            }
            if(i%2==0){
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};