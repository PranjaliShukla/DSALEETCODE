class Solution {
public:
    void combination(int k,int i,int n,vector<int>&res,vector<vector<int>>&ans){
        if(n==0 && res.size()==k){
            ans.push_back(res);
            return;
        }
        if(n<0 || res.size()>k || i>9){
            return;
        }
        res.push_back(i);
        combination(k,i+1,n-i,res,ans);
        res.pop_back();
        combination(k,i+1,n,res,ans);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>res;
        vector<vector<int>>ans;
        combination(k,1,n,res,ans);
        return ans;
        
    }
};