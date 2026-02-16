class Solution {
public:
void sub(int i,int n,vector<int>&res,set<vector<int>>&ans,vector<int>&nums){
    if(i>=n){
        ans.insert(res);
        return;
    }
    res.push_back(nums[i]);
    sub(i+1,n,res,ans,nums);
    res.pop_back();
    sub(i+1,n,res,ans,nums);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<int>res;
        sub(0,n,res,ans,nums);
        return vector<vector<int>>(ans.begin(),ans.end());


        
    }
};