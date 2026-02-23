class Solution {
public:
void sub(int k,int i,vector<int>&ans,vector<vector<int>>&final,vector<int>&res){
    if(res.size()==k){
        final.push_back(res);
        return;
    }
    if(i==ans.size())return;
    res.push_back(ans[i]);
    sub(k,i+1,ans,final,res);
    res.pop_back();
    sub(k,i+1,ans,final,res);
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(i);
        }
        vector<int>res;
        vector<vector<int>>final;
        sub(k,0,ans,final,res);
        return final;

        
    }
};