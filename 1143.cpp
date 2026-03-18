class Solution {
public:
int longest(int i,int j,string &text1,string &text2,vector<vector<int>>&dp){
    if(i<0 || j<0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    if(text1[i]==text2[j]){
        return dp[i][j]= 1+longest(i-1,j-1,text1,text2,dp);
    }
    else{
        return dp[i][j]=0+max(longest(i,j-1,text1,text2,dp),longest(i-1,j,text1,text2,dp));
    }
}

    int longestCommonSubsequence(string text1, string text2) {
        int idx1=text1.size()-1;
        int idx2=text2.size()-1;
        vector<vector<int>>dp(idx1+1,vector<int>(idx2+1,-1));
        int ans=longest(idx1,idx2,text1,text2,dp);
        return ans;


        
    }
};