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
//two codes
class Solution {
public:
   void combination(int i,int n,vector<int>&res,vector<vector<int>>&ans,vector<int>&candidates,int target){
    if(target==0){
        ans.push_back(res);
        return;
    }
    if(i>=n || target<0){
        return;
    }
    res.push_back(candidates[i]);
    combination(i+1,n,res,ans,candidates,target-candidates[i]);
    res.pop_back();
    while(i+1<n && candidates[i]==candidates[i+1]){
        i++;
    }
    combination(i+1,n,res,ans,candidates,target);


   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>res;
        sort(candidates.begin(),candidates.end());
        combination(0,candidates.size(),res,ans,candidates,target);
        return ans;

        
    }
};