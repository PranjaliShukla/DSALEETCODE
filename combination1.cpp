class Solution {
public:
void comb(int i,int n,int target,vector<int>&candidates,vector<int>&res,vector<vector<int>>&ans){
    if(target==0){
        ans.push_back(res);
        return;
    }
    if(target<0){
        return;
    }
    if(i==n)return;
    res.push_back(candidates[i]);
    comb(i,n,target-candidates[i],candidates,res,ans);
    res.pop_back();
    comb(i+1,n,target,candidates,res,ans);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>res;
        vector<vector<int>>ans;
        int n=candidates.size();
        comb(0,n,target,candidates,res,ans);
        return ans;


        
    }
};