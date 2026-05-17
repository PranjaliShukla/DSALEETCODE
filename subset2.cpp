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
//method 2
class Solution {
public:
void subset(int i,int n,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
   
        ans.push_back(temp);
      
    
    for(int j=i;j<n;j++){
        if(j>i && nums[j]==nums[j-1])continue;
        temp.push_back(nums[j]);
        subset(j+1,n,nums,temp,ans);
        temp.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>ans;
        subset(0,n,nums,temp,ans);
        return ans;
        
    }
};