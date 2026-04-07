class Solution {
  public:
  int jump(vector<int>&height,vector<int>&dp,int i){
      if(i==0) return dp[0]=0;
      if(dp[i]!=-1) return dp[i];
      int left=jump(height,dp,i-1)+abs(height[i]-height[i-1]);
      int right=INT_MAX;
      if(i>1){
          right=jump(height,dp,i-2)+abs(height[i]-height[i-2]);
      }
      return dp[i]=min(left,right);
  }
    int minCost(vector<int>& height) {
        int n=height.size();
       vector<int>dp(n,-1);
       int ans=jump(height,dp,n-1);
       return ans;
        // Code here
        
    }
};