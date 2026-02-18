class Solution {
public:
void sub(int n,vector<int>&res,vector<vector<int>>&ans,vector<int>&nums,vector<bool>&visited){
    if(res.size()==n){
        ans.push_back(res);
        return;
    }

    for(int j=0;j<n;j++){
        if(!visited[j]){
            res.push_back(nums[j]);
            visited[j]=true;
            sub(n,res,ans,nums,visited);
            visited[j]=false;
            res.pop_back();
        }

    }

}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        vector<vector<int>>ans;
        vector<bool>visited(n,false);
        sub(n,res,ans,nums,visited);
        return ans;
    }
};