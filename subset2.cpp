class Solution {
public:
     void subset(int i,int n,vector<int>&temp,set<vector<int>>&ans,vector<int>&nums){
        if(i==n){
           
            ans.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        subset(i+1,n,temp,ans,nums);
        temp.pop_back();
        subset(i+1,n,temp,ans,nums);
     }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>temp;
        set<vector<int>>ans;
        subset(0,n,temp,ans,nums);
        return vector<vector<int>>(ans.begin(),ans.end());
        
    }
};