class Solution {
public:
int mind(int i,int j,string word1,string word2,vector<vector<int>>&dp){
    if(i<0 || j<0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(word1[i]==word2[j]){
        return dp[i][j]=1+mind(i-1,j-1,word1,word2,dp);
    }
    
        return dp[i][j]=0+max(mind(i-1,j,word1,word2,dp),mind(i,j-1,word1,word2,dp));
    


}
    int minDistance(string word1, string word2) {
        int s1=word1.size();
        int s2=word2.size();
        vector<vector<int>>dp(s1,vector<int>(s2,-1));
        
        int lcs=mind(s1-1,s2-1,word1,word2,dp);
        return s1+s2-lcs-lcs;

        
    }
};