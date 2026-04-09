class Solution {
public:
int robo(int i,vector<int>&nums,vector<int>&dp){
    if(i==0)return dp[0]=nums[0];
    if(i==1) return dp[1]=max(nums[0],nums[1]);
    if(dp[i]!=-1)return dp[i];
    int take=nums[i]+robo(i-2,nums,dp);
    int notake=robo(i-1,nums,dp);
    return dp[i]=max(take,notake);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        int ans=robo(n-1,nums,dp);
        return ans;
        
    }
};