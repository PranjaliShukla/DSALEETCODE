class Solution {
public:
void sub(int i,int target,vector<int>&res,vector<vector<int>>&ans,vector<int>&candidates){
    if(target==0){
        ans.push_back(res);
        return;
    }
    for(int j=i;j<candidates.size();j++){
        if( j>i && candidates[j]==candidates[j-1]){
            continue;
        }
        if(candidates[j]>target){
            return;
        }
        res.push_back(candidates[j]);
        sub(j+1,target-candidates[j],res,ans,candidates);
        res.pop_back();
        


    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>res;
        vector<vector<int>>ans;
        sub(0,target,res,ans,candidates);
        return ans;
        
    }
};