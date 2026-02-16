class Solution {
public:
void sub(int i,int n,vector<int>&res,vector<vector<int>>&ans,vector<int>&nums){
    if(i>=n){
        ans.push_back(res);
        return;
    }
    res.push_back(nums[i]);
    sub(i+1,n,res,ans,nums);
    res.pop_back();
    sub(i+1,n,res,ans,nums);

}

    vector<vector<int>> subsets(vector<int>& nums) {
        int s=nums.size();
        vector<vector<int>>ans;
        vector<int>res;
        sub(0,s,res,ans,nums);
        return ans;
        
    }
};