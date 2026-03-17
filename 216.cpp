class Solution {
public:
void combi(int i,int n,vector<int>&res,int k,vector<vector<int>>&ans){
    if(res.size()==k && n==0){
        ans.push_back(res);
        return;
    }
    if(i>9 || n<0 || res.size()>k)return;

    res.push_back(i);
    combi(i+1,n-i,res,k,ans);
    res.pop_back();
    combi(i+1,n,res,k,ans);


}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>res;
        vector<vector<int>>ans;
        combi(1,n,res,k,ans);
        return ans;
        
    }
};