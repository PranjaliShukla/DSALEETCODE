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
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,vector<pair<int,int>>>mp;
        vector<vector<int>>result;
        if(root==NULL){
            return result;
        }
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode *curr=p.first;
            int v=p.second.first;
            int h=p.second.second;
            mp[v].push_back({h,curr->val});
            if(curr->left){
                q.push({curr->left,{v-1,h+1}});
            }
            if(curr->right){
                q.push({curr->right,{v+1,h+1}});
            }
        }
        for(auto &it:mp){
            sort(it.second.begin(),it.second.end());
            vector<int>vertical;
            for(auto &q:it.second){
                vertical.push_back(q.second);
            }
            result.push_back(vertical);
        }
        return result;
        
    }
};