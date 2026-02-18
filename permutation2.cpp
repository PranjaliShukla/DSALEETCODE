class Solution {
public:
void sub(int i,int n,vector<int>&res,vector<int>&nums,vector<vector<int>>&ans,vector<bool>&visited){
    if(res.size()==n){
        ans.push_back(res);
        return;
    }
    for(int j=0;j<n;j++){
        if(j>0 && nums[j]==nums[j-1] && !visited[j-1]){
            continue;

        }
        if(!visited[j]){
            res.push_back(nums[j]);
            visited[j]=true;
            sub(j+1,n,res,nums,ans,visited);
            res.pop_back();
            visited[j]=false;

        }
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>res;
        vector<vector<int>>ans;
        vector<bool>visited(n,false);
        sub(0,n,res,nums,ans,visited);
        return ans;
       
       
        
    }
};