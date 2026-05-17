class Solution {
public:
void subset(vector<int>&nums,int i,int n,vector<vector<int>>&ans,vector<int>&temp){
    if(i==n){
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    subset(nums,i+1,n,ans,temp);
    temp.pop_back();
    subset(nums,i+1,n,ans,temp);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        subset(nums,0,nums.size(),ans,temp);
        return ans;
        
    }
};