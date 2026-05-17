class Solution {
public:
void subset(int i,int n,vector<int>&temp,vector<int>&nums,set<vector<int>>&ans){
      if(i==n){
        ans.insert(temp);
        return;
      }
      temp.push_back(nums[i]);
      subset(i+1,n,temp,nums,ans);
     temp.pop_back();
     subset(i+1,n,temp,nums,ans);
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>temp;
        set<vector<int>>ans;
        subset(0,n,temp,nums,ans);
        return vector<vector<int>>(ans.begin(),ans.end());
        
    }
};