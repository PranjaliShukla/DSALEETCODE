class Solution {
public:
int robb(int i,vector<int>&nums,vector<int>&dp){
    if(i==0)return dp[0]=nums[0];
    if(i==1)return dp[1]=max(nums[0],nums[1]);
    if(dp[i]!=-1)return dp[i];
    int take=nums[i]+robb(i-2,nums,dp);
    int nt=robb(i-1,nums,dp);
    return dp[i]=max(take,nt);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int>dp(n,-1);
        int ans1=robb(n-2,nums,dp);
        vector<int>nums2(nums.begin()+1,nums.end());
        vector<int>dp1(n-1,-1);
        int ans2=robb(n-2,nums2,dp1);
        return max(ans1,ans2);
        
    }
};