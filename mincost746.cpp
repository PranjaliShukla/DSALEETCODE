class Solution {
public:
int climb(vector<int>&cost,int i,vector<int>&dp){
    if(i==0)return dp[0]=cost[0];
    if(i==1)return dp[1]=cost[1];
    if(dp[i]!=-1)return dp[i];
    return dp[i]=cost[i]+min(climb(cost,i-1,dp),climb(cost,i-2,dp));
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        int ans=min(climb(cost,n-1,dp),climb(cost,n-2,dp));
        return ans;
        
    }
};