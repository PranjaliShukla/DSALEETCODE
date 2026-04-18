class Solution {
public:
    void combination(int i,int n,vector<int>&temp,vector<vector<int>>&ans,vector<int>&candidates,int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0 || i>=n){
            return;

        }
        temp.push_back(candidates[i]);
        combination(i,n,temp,ans,candidates,target-candidates[i]);
        temp.pop_back();
        combination(i+1,n,temp,ans,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        int n=candidates.size();
        vector<vector<int>>ans;
        combination(0,n,temp,ans,candidates,target);
        return ans;
        
    }
};