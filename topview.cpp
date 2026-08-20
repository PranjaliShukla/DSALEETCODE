/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
       queue<pair<Node *,pair<int,int>>>q;
       map<int,vector<pair<int,int>>>mp;
       vector<int>ans;
       if(root==NULL){
           return ans;
       }
       q.push({root,{0,0}});
       while(!q.empty()){
           auto l=q.front();
           q.pop();
           Node *curr=l.first;
           int v=l.second.first;
           int h=l.second.second;
           mp[v].push_back({h,curr->data});
           if(curr->left){
               q.push({curr->left,{v-1,h+1}});
           }
           if(curr->right){
               q.push({curr->right,{v+1,h+1}});
           }
       }
       for(auto &it:mp){
           vector<int>vertical;
           for(auto &l:it.second){
               vertical.push_back(l.second);
           }
           ans.push_back(vertical[0]);
       }
       return ans;
        
    }
};